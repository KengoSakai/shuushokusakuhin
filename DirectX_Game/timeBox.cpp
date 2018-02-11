/******************************************************************
***
***		ゲージ処理
***
***		timeBox.cpp
***
***		author: Kengo Sakai
***
*******************************************************************/

/******************************************************************
インクルードファイル
*******************************************************************/
#include "manager.h"
#include "timeBox.h"

/******************************************************************
コンストラクタ
*******************************************************************/
CTimeBox::CTimeBox()
{
	Position = D3DXVECTOR3(0.0f, 0.0f, 0.0f);
	WidthHeight = D3DXVECTOR3(SCREEN_WIDTH, 100.0f, 0.0f);
	Color = D3DXCOLOR(255.0f, 255.0f, 255.0f, 255.0f);
}

/******************************************************************
初期化処理
*******************************************************************/
void CTimeBox::Initialize(void)
{
	CScene2D::Initialize();
	CScene2D::SetColor(Color);
}

/******************************************************************
終了処理
*******************************************************************/
void CTimeBox::Uninitialize(void)
{
	CScene2D::Uninitialize();
}

/******************************************************************
更新処理
*******************************************************************/
void CTimeBox::Update(void)
{

}

/******************************************************************
描画処理
*******************************************************************/
void CTimeBox::Draw(void)
{
	CScene2D::Draw();
}

/******************************************************************
オブジェクト生成処理
*******************************************************************/
CTimeBox *CTimeBox::Create(void)
{
	//オブジェクトポインタ
	CTimeBox *pTimeGauge;

	//インスタンス生成
	pTimeGauge = new CTimeBox;

	//初期化
	pTimeGauge->Initialize();
	
	//オブジェクトの型を設定
	pTimeGauge->SetObjType(OBJTYPE_TIME);
	
	CManager::GetTextureManager()->LoadTexture(CTextureManager::TYPE_SCREEN_UI);

	//テクスチャを設定
	pTimeGauge->BindTexture(CManager::GetTextureManager()->GetTexture(CTextureManager::TYPE_SCREEN_UI));

	return pTimeGauge;
}