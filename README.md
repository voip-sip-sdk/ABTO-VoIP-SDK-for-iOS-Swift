# ABTO VoIP SDK for Swift (Easy Swift integration)

ABTO Software VoIP SIP SDK for iPhone and iPad will help you to quickly build a custom softphone app for iOS. 
This repository is for Swift based CocoaPod integration.

## Getting Started

These instructions will help you to configure ABTO VoIP SDK for Swift using CocoaPods.

### Prerequisites

CocoaPods

### Podfile setup

```
# Minimal supported version is 8.0
platform :ios, '8.0'

# include all required sources in addition to ABTO one
source 'https://github.com/artsy/Specs.git'
source 'https://github.com/CocoaPods/Specs.git'
source 'https://github.com/voip-sip-sdk/ABTO-VoIP-SDK-for-iOS-Swift.git'
```

In all targets that should use ABTO VoIP SDK for Swift include approriate pod via:

```
pod 'AbtoVoipSDKSwift', '~> 1.1.0'
```

Version 1.1.0 here is used as example

### Pod project configuration

`pod install`
 or
`pod update`

### SDK usage

To use ABTO VoIP SDK for Swift classes and methods import library via:

```import AbtoVoipSDKSwift```
