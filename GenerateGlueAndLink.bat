.\bin\godot.windows.editor.x86_64.mono.exe  --headless --generate-mono-glue modules/mono/glue
py .\modules\mono\build_scripts\build_assemblies.py --godot-output-dir=.\bin
