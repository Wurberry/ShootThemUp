// Shoot Them Up Game. All rights reserved.


#include "UI/STUGameHUD.h"
#include "Engine/Canvas.h"

void ASTUGameHUD::DrawHUD()
{
	Super::DrawHUD();

	DrawCrossHair();
}


void ASTUGameHUD::DrawCrossHair()
{
	const TInterval<float> ScreenCenter(Canvas->SizeX * 0.5f, Canvas->SizeY * 0.5f);

	const float HalfLineSize = 10.0f;
	const float LineThickness = 2.0f;
	const FLinearColor LineColor = FColor::Green;
	
	DrawLine(ScreenCenter.Min - HalfLineSize, ScreenCenter.Max, ScreenCenter.Min + HalfLineSize, ScreenCenter.Max, LineColor, LineThickness);
	DrawLine(ScreenCenter.Min, ScreenCenter.Max - HalfLineSize, ScreenCenter.Min, ScreenCenter.Max + HalfLineSize, LineColor, LineThickness);
	
}
