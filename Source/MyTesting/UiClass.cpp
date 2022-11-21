// Fill out your copyright notice in the Description page of Project Settings.


#include "UiClass.h"
#include <Components/Button.h>
#include <Components/TextBlock.h>

void UUiClass::NativeConstruct()
{
    Super::NativeConstruct();

    SignInButton();

    SignIn->OnClicked.AddUniqueDynamic(this, &UUiClass::OnSignInButtonClicked);
}

void UUiClass::SignInButton()
{
    int32 randomNumber = FMath::RandRange(0, 100);
    Info->SetText(FText::AsNumber(randomNumber));
}

void UUiClass::OnSignInButtonClicked()
{
    SignInButton();
}