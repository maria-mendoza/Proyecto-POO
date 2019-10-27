#include "matriz.h"

void TMatriz::TMatriz(): {
CBattleBox::CBattleBox(): m_CantRobots{0}, 
  m_Altura{ALTURA}, m_Ancho{ANCHO}  {
  /*m_Plano = new TipoCaracter*[m_Altura];
  for (size_t i = 0; i < m_Altura; ++i)
    m_Plano[i] = new TipoCaracter[m_Ancho];*/ 
    resizePlano(m_Altura,m_Ancho) ;
}
(TipoEntero altura, TipoEntero ancho);
TMatriz virtual ~TMatriz();
void AdicionarObstaculos()(Obstaculo* obstaculos);
void ImprimirObstaculos();
void DibujarMatriz();
