# ABTO VoIP SDK for Swift (Easy Swift integration)

ABTO Software VoIP SIP SDK for iPhone and iPad will help you to quickly build a custom softphone app for iOS. 
This repository is for Swift based CocoaPod integration.

## Getting Started

These instructions will help you to configure ABTO VoIP SDK for Swift using CocoaPods.

### Prerequisites

CocoaPods

### Podfile setup

```
# Minimal supported version is 12.0
platform :ios, '12.0'

# include all required sources in addition to ABTO one
source 'https://github.com/artsy/Specs.git'
source 'https://github.com/CocoaPods/Specs.git'
source 'https://github.com/voip-sip-sdk/ABTO-VoIP-SDK-for-iOS-Swift.git'
```

In all targets that should use ABTO VoIP SDK for Swift include approriate pod via:

```
pod 'AbtoVoipSDKSwift', '~> 2.0.0'
```

Version 2.0.0 here is used as example

### Pod project configuration

`pod install`
 or
`pod update`

### SDK usage

To use ABTO VoIP SDK for Swift classes and methods import library via:

```import AbtoVoipSDKSwift```

Additionally developer need to setup license information required by SDK to operate.
This information must be provided before initialize method is called. There are 2 static properties in `AbtoPhoneConfig` class to set it up:
1) `licenseUserId` property to set UserId in form of “{Trial...}” or “{Licensed...}”, etc
2) `licenseKey` property to set Key in form of “{V0exUTjAafwV...}”, etc
In many scenarios SDK is used and initialized after didFinishLaunchingWithOptions method is executed, so adding license setup here might be a right choice.

To obtain trial license for testing navigate to our site https://voipsipsdk.com/product/voip-sip-sdk?attribute_pa_platform=ios select proper options(single call or multiple calls support) and press "Download Free Trial", enter e-mail to receive trial credentials.
