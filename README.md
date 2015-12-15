# DocuSign Objective-C Client

The DocuSign Objective-C Client is an auo-generated library from Swagger that can be used to quickly interact with the DocuSign REST API.  This project contains the core source code for the client along with tests and recipes (examples) showing its use.  

**ORGANIZATION**

  * `\sdk`:  Source code for the client 
  * `\test`:  Unit tests and sample code

**HOW TO USE**

There are two main ways of using this client:  

  1. Create a podfile, run pod install, then use the .xcworkspace project file moving forward.
  2. Copy the source files directly into your existing project's source directories and `import`.

For method #1 you can do the following:

```bash
$ gem install cocoapods # This may require sudo
```

Then create a file called in your root project directory called `podfile` and add: 

```ruby
pod "DocuSignESignClient", :path => "./sdk"
```

Then run the following command in the same directory as your podfile: 

```bash
$ pod install
```

**DEPENDENCIES**

This project has several external dependencies, you may need to add some additional JAR files to your project settings.  See the [/sdk/target/lib/](sdk/target/lib/) folder.

**SYSTEM REQUIREMENTS**

This Client has been tested using: 

* Xcode Version 6.2 (6C131e)

**EXAMPLES**

  1. Recipes (Code Walkthroughs) are available here: [CoreRecipes.m](test/Recipes/CoreRecipes.m)
  2. Unit tests are available here: [SdkTestsTests.m](test/SdkTests/SdkTestsTests/SdkTestsTests.m).
