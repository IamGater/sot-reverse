// Auto-reconstructed from serialized Kismet bytecode and SDK reflection.
// C++-style logic; original editor graph layout is unavailable in the input.

// Recovered Kismet: BP_Prototype_AshenWindsSphereFlamethrower_C::CalculateAnimationDuration (34 bytes)
void BP_Prototype_AshenWindsSphereFlamethrower_C::CalculateAnimationDuration()
{
    return;
}

// Recovered Kismet: BP_Prototype_AshenWindsSphereFlamethrower_C::UserConstructionScript (3 bytes)
void BP_Prototype_AshenWindsSphereFlamethrower_C::UserConstructionScript()
{
    return;
}

// Recovered Kismet: BP_Prototype_AshenWindsSphereFlamethrower_C::Activate (22 bytes)
void BP_Prototype_AshenWindsSphereFlamethrower_C::Activate()
{
    idx:285692();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWindsSphereFlamethrower_C::Deactivate (22 bytes)
void BP_Prototype_AshenWindsSphereFlamethrower_C::Deactivate()
{
    idx:285692();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWindsSphereFlamethrower_C::Fire (22 bytes)
void BP_Prototype_AshenWindsSphereFlamethrower_C::Fire()
{
    idx:285692();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWindsSphereFlamethrower_C::Initialise (22 bytes)
void BP_Prototype_AshenWindsSphereFlamethrower_C::Initialise()
{
    idx:285692();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWindsSphereFlamethrower_C::fn_idx_285679 (22 bytes)
void BP_Prototype_AshenWindsSphereFlamethrower_C::fn_idx_285679()
{
    idx:285692();
    return;
}

// Recovered Kismet: BP_Prototype_AshenWindsSphereFlamethrower_C::fn_idx_285692 (1357 bytes)
void BP_Prototype_AshenWindsSphereFlamethrower_C::fn_idx_285692()
{
    auto CallFunc_LessEqual_IntInt_ReturnValue = Temp_int_Variable;
    AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = UGameplayStatics::BeginDeferredActorSpawnFromClass(idx_285689, CallFunc_MakeTransform_ReturnValue);
    auto CallFunc_FinishSpawningActor_ReturnValue = GameplayStatics->this->FinishSpawningActor(CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, CallFunc_MakeTransform_ReturnValue);
    int CallFunc_Array_Add_ReturnValue = UKismetArrayLibrary::Array_Add(idx_285694, CallFunc_FinishSpawningActor_ReturnValue);
    auto CallFunc_Add_IntInt_ReturnValue = Temp_int_Variable;
    auto Temp_int_Variable = CallFunc_Add_IntInt_ReturnValue;
    auto CallFunc_Add_IntInt_ReturnValue2 = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Loop_Counter_Variable = CallFunc_Add_IntInt_ReturnValue2;
    int CallFunc_Array_Length_ReturnValue = UKismetArrayLibrary::Array_Length(idx_285694);
    auto CallFunc_Less_IntInt_ReturnValue = Temp_int_Loop_Counter_Variable;
    auto Temp_int_Array_Index_Variable = Temp_int_Loop_Counter_Variable;
    FTimerHandle CallFunc_K2_SetTimerDelegate_ReturnValue = UKismetSystemLibrary::K2_SetTimerDelegate(UniqueObjectNameForCooking_OutputDelegate, idx_285693, true);
    auto Timer = CallFunc_K2_SetTimerDelegate_ReturnValue;
    auto CallFunc_GetForwardVector_ReturnValue = Arrow->this->GetForwardVector();
    FVector CallFunc_K2_GetComponentLocation_ReturnValue = DefaultSceneRoot->K2_GetComponentLocation();
    auto CallFunc_Add_IntInt_ReturnValue3 = idx_285690;
    auto CallFunc_Percent_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue3;
    auto idx_285690 = CallFunc_Percent_IntInt_ReturnValue;
    return;
}
