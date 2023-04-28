#pragma once
#include "../../common/Geometry.h"
#include "../Object.h"

class Stage :
    public Object
{
public:
    Stage();
    ~Stage();

    //初期化
    void Init() override; 
    //更新
    void Update() override;
    //描画
    void Draw() override;   

    void Release() override;

private:

};

