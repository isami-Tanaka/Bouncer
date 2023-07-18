#include <DxLib.h>
#include "Stage.h"
#include "../../scene/SceneManager.h"
#include "../../tmx/TmxObj.h"

Stage::Stage()
{
	Init();
}

Stage::~Stage()
{
	Release();
}

void Stage::Init()
{
	//tmxの読み込み
	tmxObj_.LoadTmx("resource/tmx/Stage.tmx", false);

	//画像の読み込み
	stageImage_ = LoadGraph("resource/image/stage/stage.png",true);

}

void Stage::Update()
{

}

void Stage::Draw()
{
	

	//tmxのCollLiset取得
	for (auto& coll : tmxObj_.GetStageimageList())
	{
		stagePos = coll.first;
		stagePosEnd = coll.second;
	}

	DrawExtendGraph(stagePos.x, stagePos.y,stagePosEnd.x, stagePosEnd.y , stageImage_,true);
}

void Stage::Release()
{
	DeleteGraph(stageImage_);
}
