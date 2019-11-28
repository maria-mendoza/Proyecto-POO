#ifndef NATRMARR_FUNCT_H
#define NATRMARR_FUNCT_H

#include <queue>
#include "tipos.h"
#include "algoritmo.h"
#include "matriz.h"
bool operator<(const algoritmo & a, const algoritmo & b)
{
    return a.getPriority() > b.getPriority();
}

string pathFind( const int & xStart, const int & yStart,
                 const int & xFinish, const int & yFinish, TMatriz campus  )
{
    static priority_queue<algoritmo> pq[2]; 
    static int pqi; 
    static algoritmo* n0;
    static algoritmo* m0;
    static int i, j, x, y, xdx, ydy;
    static char c;
    pqi=0;

    for(y=0;y<m;y++)
    {
        for(x=0;x<n;x++)
        {
            closed_nodes_map[x][y]=0;
            open_nodes_map[x][y]=0;
        }
    }
cout<<"Map Size (X,Y): "<<"10"<<","<<"10"<<endl;
    cout<<"Start: "<<xStart<<","<<yStart<<endl;
    cout<<"Finish: "<<xFinish<<","<<yFinish<<endl;
    n0=new algoritmo(xStart, yStart, 0, 0);
    n0->updatePriority(xFinish, yFinish);
    pq[pqi].push(*n0);
    open_nodes_map[x][y]=n0->getPriority(); 
    while(!pq[pqi].empty())
    {
        n0=new algoritmo( pq[pqi].top().getxPos(), pq[pqi].top().getyPos(),
                     pq[pqi].top().getLevel(), pq[pqi].top().getPriority());

        x=n0->getxPos(); y=n0->getyPos();

        pq[pqi].pop();
        open_nodes_map[x][y]=0;
        closed_nodes_map[x][y]=1;


        if(x==xFinish && y==yFinish)
        {
            string path="";
            while(!(x==xStart && y==yStart))
            {
                j=dir_map[x][y];
                c='0'+(j+dir/2)%dir;
                path=c+path;
                x+=dx[j];
                y+=dy[j];
            }

      
            delete n0;
            while(!pq[pqi].empty()) pq[pqi].pop();
            return path;
        }

        for(i=0;i<dir;i++)
        {
            xdx=x+dx[i]; ydy=y+dy[i];

            if(!(xdx<0 || xdx>n-1 || ydy<0 || ydy>m-1 || campus.getplano()[xdx][ydy]==1
                 || closed_nodes_map[xdx][ydy]==1))
            {
                m0=new algoritmo( xdx, ydy, n0->getLevel(),
                             n0->getPriority());
                m0->nextLevel(i);
                m0->updatePriority(xFinish, yFinish);
                if(open_nodes_map[xdx][ydy]==0)
                {
                    open_nodes_map[xdx][ydy]=m0->getPriority();
                    pq[pqi].push(*m0);
                    dir_map[xdx][ydy]=(i+dir/2)%dir;
                }
                else if(open_nodes_map[xdx][ydy]>m0->getPriority())
                {
                    open_nodes_map[xdx][ydy]=m0->getPriority();
                  
                    dir_map[xdx][ydy]=(i+dir/2)%dir;
                    while(!(pq[pqi].top().getxPos()==xdx &&
                            pq[pqi].top().getyPos()==ydy))
                    {
                        pq[1-pqi].push(pq[pqi].top());
                        pq[pqi].pop();
                    }
                    pq[pqi].pop();

                    if(pq[pqi].size()>pq[1-pqi].size()) pqi=1-pqi;
                    while(!pq[pqi].empty())
                    {
                        pq[1-pqi].push(pq[pqi].top());
                        pq[pqi].pop();
                    }
                    pqi=1-pqi;
                    pq[pqi].push(*m0); 
                }
                else delete m0; 
            }
        }
        delete n0; 
    }
    return ""; 
}



#endif //NATRMARR_FUNCT_H
