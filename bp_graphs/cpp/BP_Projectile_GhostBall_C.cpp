// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Projectile_GhostBall_C::UserConstructionScript (3 bytes)
void BP_Projectile_GhostBall_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Projectile_GhostBall_C::ReceiveBeginPlay (22 bytes)
void BP_Projectile_GhostBall_C::ReceiveBeginPlay()
{
    ExecuteUbergraph_BP_Projectile_GhostBall();
    return;
}

// Recovered Kismet: BP_Projectile_GhostBall_C::ReceiveDestroyed (22 bytes)
void BP_Projectile_GhostBall_C::ReceiveDestroyed()
{
    ExecuteUbergraph_BP_Projectile_GhostBall();
    return;
}

// Recovered Kismet: BP_Projectile_GhostBall_C::ExecuteUbergraph_BP_Projectile_GhostBall (604 bytes)
void BP_Projectile_GhostBall_C::ExecuteUbergraph_BP_Projectile_GhostBall()
{
    bool CallFunc_IsDedicatedServer_ReturnValue = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue) goto L_8D;
L_8D:
    bool CallFunc_IsDedicatedServer_ReturnValue2 = UKismetSystemLibrary::IsDedicatedServer();
    if (!CallFunc_IsDedicatedServer_ReturnValue2) goto L_EC;
L_EC:
    auto CallFunc_GetTransform_ReturnValue = this->GetTransform();
    AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = UGameplayStatics::BeginDeferredActorSpawnFromClass(idx_231720, CallFunc_GetTransform_ReturnValue);
    CallFunc_GetTransform_ReturnValue = this->GetTransform();
    auto CallFunc_FinishSpawningActor_ReturnValue = GameplayStatics->this->FinishSpawningActor(CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, CallFunc_GetTransform_ReturnValue);
    auto idx_231734 = CallFunc_FinishSpawningActor_ReturnValue;
    return;
}
