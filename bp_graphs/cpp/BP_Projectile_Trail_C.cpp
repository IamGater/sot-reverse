// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Projectile_Trail_C::SetVelocity (94 bytes)
void BP_Projectile_Trail_C::SetVelocity()
{
    auto CallFunc_Conv_VectorToLinearColor_ReturnValue = Velocity;
    return;
}

// Recovered Kismet: BP_Projectile_Trail_C::UserConstructionScript (3 bytes)
void BP_Projectile_Trail_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Projectile_Trail_C::ReceiveBeginPlay (22 bytes)
void BP_Projectile_Trail_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Projectile_Trail();
    return;
}

// Recovered Kismet: BP_Projectile_Trail_C::KillTrail (22 bytes)
void BP_Projectile_Trail_C::KillTrail()
{
    ExecuteUbergraph_BP_Projectile_Trail();
    return;
}

// Recovered Kismet: BP_Projectile_Trail_C::ExecuteUbergraph_BP_Projectile_Trail (632 bytes)
void BP_Projectile_Trail_C::ExecuteUbergraph_BP_Projectile_Trail()
{
    K2_DestroyActor();
    float CallFunc_GetGameTimeInSeconds_ReturnValue2 = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_CreateDynamicMaterialInstance_ReturnValue = StaticMeshComponent->CreateDynamicMaterialInstance();
    auto DynamicMaterial = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    float CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    CallFunc_GetGameTimeInSeconds_ReturnValue = UKismetSystemLibrary::GetGameTimeInSeconds();
    auto CallFunc_Add_FloatFloat_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
    return;
}
