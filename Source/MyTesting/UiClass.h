// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UiClass.generated.h"

/**
 * 
 */
UCLASS()
class MYTESTING_API UUiClass : public UUserWidget
{
	GENERATED_BODY()

protected:
	void SignInButton();

	UPROPERTY(meta = (BindWidget) )
		class UTextBlock* Info;
		
	UPROPERTY( meta = ( BindWidget ) )
		class UButton* SignIn;

	UFUNCTION()
		void OnSignInButtonClicked();
	
	void NativeConstruct() override;
};
