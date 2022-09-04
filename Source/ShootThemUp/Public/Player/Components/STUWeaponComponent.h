// Shoot Them Up Game. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "STUWeaponComponent.generated.h"

class ASTUBaseWeapon;

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class SHOOTTHEMUP_API USTUWeaponComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	USTUWeaponComponent();

	void Fire();

protected:

	UPROPERTY(EditDefaultsOnly, Category="Weapon")
	TSubclassOf<ASTUBaseWeapon> WeaponClass;

	UPROPERTY(EditDefaultsOnly, Category="Weapon")
	FName WeaponAttachPointName = "WeaponPoint";

	virtual void BeginPlay() override;

private:

	UPROPERTY()
	ASTUBaseWeapon* CurrentWeapon = nullptr;
	
	UFUNCTION()
	void SpawnWeapon();
		
};
