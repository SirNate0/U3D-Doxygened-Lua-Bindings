# U3D-Doxygened-Lua-Bindings

Automatic Binding Generator using Doxygen, Python, and Sol3 

Use with this branch of U3D: <https://github.com/SirNate0/U3D/tree/lua-bindings>

## Instructions

1. Build that U3D branch. The samples and player will fail to build, as the binding function is left undefined.
2. Build this project, pointing it at the library that was just built as URHO3D_HOME. This project defines the binding function.
3. You will need to symlink the bin/Data folder into the Build/bin folder, as it needs a few of the changed files. I think Urho's CMake code handles this automatically.
4. The `Build/bin/test-sol3` executable should run without crashing. However, it's not possible to interact with it, as event subscriptions are not finished at present (hence the function at the start of `bin/Data/run.lua` that just prints a `TODO`.

To rebuild the bindings

1. Navigate to the `generator` folder
2. Run `doxygen Doxyfile`. You will need to edit the Doxyfile to point at your U3D installation first. 
  - You may need to run it a couple times or remove the `generated-xml` contents first, I've had some issues in the past where it looked like it was using old content (I may have been mistaken, but I thought I should mention the possibility).
3. Run `generate-bindings.py`. You will probably have to install a few packages for this.
  - This removes the `generator/generated` folder and recreates it (this way old no-longer-existing files are removed and don't stick around).
  - To prevent `make` from thinking this means *all* of the generated files change every time, the python code then selectively updates the `generator/synced-generated` files based on actual changes.
  - This `generator/synced-generated` folder is what `make` is building, symlinked into the outer project folder as `generated`. This avoids the unnecessary extra rebuilding, without needing something like CCache.
4. Rebuild
