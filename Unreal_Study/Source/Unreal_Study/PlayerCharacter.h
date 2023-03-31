#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class CHARACTERMOVEMENT_API APlayerCharacter : public ACharacter
{
    GENERATED_BODY()

public:
    //이 캐릭터의 프로퍼티에 적용되는 디폴트값 설정
    APlayerCharacter();

protected:
    // 게임 시작 또는 스폰 시 호출
    virtual void BeginPlay() override;

    //스프링 암 컴포넌트가 플레이어 뒤에 있는 카메라를 따라갑니다.
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        class USpringArmComponent* SpringArmComp;

    //플레이어가 카메라를 따라갑니다.
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
        class UCameraComponent* CameraComp;

    //앞쪽/뒤쪽 입력을 위해 호출합니다.
    void MoveForward(float InputAxis);

    //왼쪽/오른쪽 입력을 위해 호출합니다.
    void MoveRight(float InputAxis);

    //캐릭터 무브먼트 속도를 스프린트 값으로 설정합니다.
    void BeginSprint();

    //캐릭터 무브먼트 속도를 디폴트 속도 값으로 다시 설정합니다.
    void EndSprint();

    //캐릭터에게 앉기를 요청합니다.
    void BeginCrouch();

    //캐릭터에게 앉기 종료를 요청합니다.
    void EndCrouch();

public:

    // 프레임마다 호출
    virtual void Tick(float DeltaTime) override;

    //함수 기능을 입력에 바인딩하기 위해 호출
    virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
