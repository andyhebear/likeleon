# 시작하기 #

1. Downloads 탭에서 Dist.zip을 받아 압축을 풉니다.

2. Mogitor\bin\Release\Resources.cfg를 열어서 모든 상대경로를 절대 경로로 수정합니다.

예
```
Zip=../../MogreEditor/Media/packs/OgreCore.zip 
-->
Zip=D:/Somewhere/Dist/Mogitor/MogreEditor/Media/packs/OgreCore.zip
```

3. Mogitor\bin\Release\MogreEditor.exe를 실행합니다.

# 샘플 프로젝트 열기 #

1. File->Open을 선택하여 프로젝트 열기 창을 불러냅니다.

2. Dist.zip의 압축을 푼 디렉토리 하의 SampleProjects\SampleScene\SampleScene.mogscene를 선택합니다.


# 알려진 문제점 #

1. WPF 프로그램의 특성상 처음 실행시 시간이 걸립니다. 두 번째 실행부터는 빨라집니다.

2. 프로그램 종료시 때때로 반응이 없는 듯한 모습을 보이고, 어느 정도 시간이 지나야 종료되는 문제가 있습니다. 원인 파악 중입니다.

3. 씬 편집 도중 때때로 비정상 종료되는 문제가 있습니다. 수정 중입니다.

4. 프로젝트에 포함되어 저장된 메시가, 해당 프로젝트를 불러오면 제대로 표시되지 않는 문제가 있습니다. 수정 중입니다.

5. "다른 이름으로 저장" 기능이 정상 동작하지 않습니다.

# 프로그램 요구사항 #
.Net Framework 3.5 SP1 이상