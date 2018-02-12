#include "scene2D.h"

class CGameEnd:public CScene2D
{
public:
	~CGameEnd(){}
	void Initialize(void);	//初期化処理
	void Uninitialize(void);	//終了処理
	void Update(void);	//更新処理
	void Draw(void);	//描画処理
	static CGameEnd *Create(void);
private:
	CGameEnd();
};
