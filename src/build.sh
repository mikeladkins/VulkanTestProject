mkdir ../build
pushd ../build
rm -rf Project
gcc -s -o Project ../src/main.cpp ../src/ve_window.cpp ../src/test_app.cpp ../src/ve_pipeline.cpp -L/usr/lib -lglfw -lvulkan -lX11 -lpthread -lXrandr -lXi -lstdc++
echo Build Complete
popd
