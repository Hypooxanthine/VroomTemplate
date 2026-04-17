#pragma once

#include <ScriptApi/ScriptApi.h>

#include <Scene/ScriptComponent.h>

class MyScript : public vrm::ScriptComponent
{
public:

  MyScript()  = default;
  ~MyScript() = default;

  void onSpawn() override;

  void onUpdate(const vrm::DeltaTime& dt) override;

private:
};

VRM_SCRIPT(MyScript)
