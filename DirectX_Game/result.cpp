/******************************************************************
***
***		リザルト処理
***
***		result.cpp
***
***		author: Kengo Sakai
***
*******************************************************************/

/******************************************************************
インクルードファイル
*******************************************************************/
#include "manager.h"
#include "result.h"
#include "scene.h"

#include "rankingScore.h"
#include "meshDome.h"
#include "meshField.h"
#include "particleManager.h"
/******************************************************************
マクロ定義
*******************************************************************/

/******************************************************************
構造体またはクラス定義
*******************************************************************/

/******************************************************************
プロトタイプ宣言
*******************************************************************/

/******************************************************************
グローバル変数
*******************************************************************/

/******************************************************************/

/******************************************************************
コンストラクタ
*******************************************************************/
CResult::CResult()
{

}

/******************************************************************
デストラクタ
*******************************************************************/
CResult::~CResult()
{

}

/******************************************************************
初期化処理関数
*******************************************************************/
void CResult::Init(void)
{
	CRankingScore::Create();
	CMeshDome::Create();
	CMeshField::Create();
}

/******************************************************************
終了処理関数
*******************************************************************/
void CResult::Uninit(void)
{
	//全オブジェクト破棄
	CScene::ReleaseAll();

	CParticleManager::ReleaseAll();
}

/******************************************************************
更新処理関数
*******************************************************************/
CBaseScene::SCENE_STATE CResult::Update(void)
{
	if (CManager::GetInputKeyboard()->GetKeyPress(DIK_SPACE))
	{
		if (CManager::GetFade()->GetFadeState() == CFade::FADE_NONE)
		{
			CManager::GetFade()->SetFade(CFade::FADE_OUT);
		}
	}

	else if (CManager::GetFade()->GetFadeState() == CFade::FADE_MAX)
	{
		return CBaseScene::SCENE_TITLE;
	}

	else
	{

	}
	return CBaseScene::SCENE_CONTINUE;
}
