source 'https://github.com/CocoaPods/Specs.git'
platform :ios, '8.0'

target 'Mars-Images' do
    pod 'EvernoteSDK', '~> 3.0'
    # Per MapBox Readme, this repo is for day-to-day dev.
    pod 'Mapbox-iOS-SDK', podspec: 'https://raw.githubusercontent.com/mapbox/mapbox-gl-native/release-ios-v3.5.0-android-v5.0.0/platform/ios/Mapbox-iOS-SDK.podspec'
    # Leaving reachability commented out to force use of Apple Built-In
    #pod 'Reachability', '~> 3.1.1'
    pod 'MWPhotoBrowser', '~> 2.1.2'
    pod 'MMDrawerController', :git => 'https://github.com/drmarkpowell/MMDrawerController.git'
    # PSMenuItem: Podspec on CocoaPods not updated to reflect an update in 2015 that is needed for newer versions of Xcode (7+). For this reason, using the commit that introduces this fix "Cast objc_msgSend calls to placate compiler."
    pod 'PSMenuItem', :git => 'https://github.com/steipete/PSMenuItem', :commit => '489dbb1c42f8c2c43ac04f0a34faf9aea3b7aa79'
    pod 'AFNetworking', '~> 3.0'
    pod 'CHCSVParser', '~> 2.1.0'
    pod 'ActionSheetPicker-3.0', '~> 2.2.0'
end

