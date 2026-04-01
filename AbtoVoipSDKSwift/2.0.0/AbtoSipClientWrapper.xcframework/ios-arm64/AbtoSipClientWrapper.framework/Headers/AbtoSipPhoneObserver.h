//
//  AbtoSipPhoneObserver.h
//  ABTO VoIP SDK
//
//  Copyright (c) 2025 ABTO Software. All rights reserved.
//

#ifndef AbtoSipClientApp_AbtoSipPhoneObserver_h
#define AbtoSipClientApp_AbtoSipPhoneObserver_h

typedef NS_ENUM(NSInteger, PhoneVideoQualityMode) {
    PhoneVideoQualityModeDefault            = 0,
    PhoneVideoQualityMode176_144            = 1,
    PhoneVideoQualityMode352_288            = 2,
    PhoneVideoQualityMode640_480            = 11,
    PhoneVideoQualityMode720_480            = 3,
    PhoneVideoQualityMode1280_720           = 4,
    PhoneVideoQualityMode1920_1080          = 5,
    PhoneVideoQualityMode176_144_Portrait   = 6,
    PhoneVideoQualityMode352_288_Portrait   = 7,
    PhoneVideoQualityMode640_480_Portrait   = 12,
    PhoneVideoQualityMode720_480_Portrait   = 8,
    PhoneVideoQualityMode1280_720_Portrait  = 9,
    PhoneVideoQualityMode1920_1080_Portrait = 10
};

typedef NS_ENUM(NSInteger, PhoneVideoCaptureContentMode) {
    PhoneVideoCaptureContentModeDefault            = 0,
    PhoneVideoCaptureContentModeAspectFit          = 1,
    PhoneVideoCaptureContentModeScaleFill          = 2,
    PhoneVideoCaptureContentModeAspectFill         = 3
};

typedef NS_ENUM(NSInteger, PhoneAudioRoute) {
    PhoneAudioRouteEarpiece = 0,
    PhoneAudioRouteSpeaker,
    PhoneAudioRouteBluetooth
};

typedef NS_ENUM(NSInteger, PhoneSignalingTransport) {
    PhoneSignalingTransportUdp = 0,
    PhoneSignalingTransportTcp,
    PhoneSignalingTransportTls
};

typedef NS_ENUM(NSInteger, PhoneCodecType) {
    PhoneCodecTypeUnsupported = 0,
    PhoneCodecTypeAudio,
    PhoneCodecTypeVideo
};

typedef NS_ENUM(NSInteger, PhoneVideoOrientation) {
    PhoneVideoOrientationPortrait = 0,
    PhoneVideoOrientationPortraitUpsideDown,
    PhoneVideoOrientationLandscapeRight,
    PhoneVideoOrientationLandscapeLeft
};

typedef NS_ENUM(NSInteger, PhoneInitializeState) {
    PhoneInitializeStateStart = 0,
    PhoneInitializeStateInfo,
    PhoneInitializeStateWarning,
    PhoneInitializeStateSuccess,
    PhoneInitializeStateFail
};

typedef NS_ENUM(NSInteger, PhoneNetworkEvent) {
    PhoneNetworkEventNotReachable = 0,
    PhoneNetworkEventReachableViaWiFi, /* NETWORK IS AVAILABLE */
//    PhoneNetworkEventReachableViaWWAN /* CURRENTLY UNSUPPORTED */
};

typedef NS_OPTIONS(NSInteger, SockEncryption) {
    SockEncryptionSSL2  = 1 << 0,
    SockEncryptionSSL3  = 1 << 1,
    SockEncryptionTL1_0 = 1 << 2,
    SockEncryptionTL1_1 = 1 << 3,
    SockEncryptionTL1_2 = 1 << 4,
    SockEncryptionTL1_3 = 1 << 5,
};

typedef NS_OPTIONS(NSInteger, PhoneIceSkipFlags) {
    PhoneIceSkipFlagsNone = 0x0,
    PhoneIceSkipFlagsReflexive = 0x1
};

typedef NS_ENUM(NSInteger, PhoneHoldMode) {
    PhoneHoldModeRfc3264                = 0, // RFC 3264 (sendonly by default or inactive if in recvonly mode)
    PhoneHoldModeRfc2543                = 1, // RFC 2543
    PhoneHoldModeRfc3264ForceInactive   = 2, // RFC 3264 force inactive
    PhoneHoldModeDefault                = PhoneHoldModeRfc3264
};

/**
 * Audio and Video Codecs
 */
typedef NS_ENUM(NSInteger, PhoneAudioVideoCodec) {
    PhoneAudioVideoCodecNone = 0,
    // audio codecs
    PhoneAudioVideoCodecAmr, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecGsm,
    PhoneAudioVideoCodecPcma,
    PhoneAudioVideoCodecPcmu,
    PhoneAudioVideoCodecIlbc,
    PhoneAudioVideoCodecSpeex,
    PhoneAudioVideoCodecBv16, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecBv32, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecEvrc, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecG729ab,
    PhoneAudioVideoCodecG722,
    PhoneAudioVideoCodecG722_1,
    PhoneAudioVideoCodecSilk,
    // video codecs
    PhoneAudioVideoCodecH261, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecH263,
    PhoneAudioVideoCodecH263p,
    PhoneAudioVideoCodecH263pp, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecH264Bp10,
    PhoneAudioVideoCodecH264Bp20, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecH264Bp30, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecH264Svc, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecTheora, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecMp4vesEs, /* CURRENTLY UNSUPPORTED */
    PhoneAudioVideoCodecVp8,
    // audio codecs
    PhoneAudioVideoCodecOpus,
    PhoneAudioVideoCodecG723,
    // extra
    PhoneAudioVideoCodecCount
};

/**
 * Presence statuses
 */
typedef NS_ENUM(NSInteger, PhoneBuddyStatus) {
    PhoneBuddyStatusUnknown = 0,
    PhoneBuddyStatusOnline,
    PhoneBuddyStatusOffline,
    PhoneBuddyStatusBusy,
    PhoneBuddyStatusAway,
};

/**
 * Force IPvX transport use
 */
typedef NS_ENUM(NSInteger, ForceTransportIpVersion) {
    ForceTransportIpVersionNone = 0,
    ForceTransportIpVersion4,
    ForceTransportIpVersion6,
    ForceTransportIpVersionReverseNegotiation
};

// Presence keys
extern NSString * _Nonnull const kBuddyId;
extern NSString * _Nonnull const kBuddyUri;
extern NSString * _Nonnull const kBuddyContact;
extern NSString * _Nonnull const kBuddyStatus;
extern NSString * _Nonnull const kBuddyStatusName;
extern NSString * _Nonnull const kBuddySubState;
extern NSString * _Nonnull const kBuddySubStateName;
extern NSString * _Nonnull const kBuddySubTermCode;
extern NSString * _Nonnull const kBuddySubTermName;
extern NSString * _Nonnull const kBuddyRpidCode;
extern NSString * _Nonnull const kBuddyPresence;

// MWI keys
extern NSString * _Nonnull const kMwiMimeType;

extern NSString * _Nonnull const kVoiceMessage;
extern NSString * _Nonnull const kFaxMessage;
extern NSString * _Nonnull const kPagerMessage;
extern NSString * _Nonnull const kMultimediaMessage;
extern NSString * _Nonnull const kTextMessage;

// Invalid call ID
extern NSInteger kInvalidCallId;

// Default FPS
extern int kDefaultFpsCount;
extern int kDefaultBps;
extern int kDefaultMinSe;

@interface AbtoPhoneMediaQuality : NSObject

@property(nonatomic, assign) NSInteger minRtt;
@property(nonatomic, assign) NSInteger maxRtt;
@property(nonatomic, assign) NSInteger avgRtt;

@property(nonatomic, assign) NSInteger minBufferJitter;
@property(nonatomic, assign) NSInteger maxBufferJitter;
@property(nonatomic, assign) NSInteger avgBufferJitter;
@property(nonatomic, assign) NSInteger devBufferJitter;
@property(nonatomic, assign) NSInteger burstJitter;
@property(nonatomic, assign) NSInteger avgBurstJitter;

@property(nonatomic, assign) NSInteger rxPackets;
@property(nonatomic, assign) NSInteger txPackets;

@property(nonatomic, assign) NSInteger rxLostPackets;
@property(nonatomic, assign) NSInteger txLostPackets;

@property(nonatomic, assign) NSInteger rxBytes;
@property(nonatomic, assign) NSInteger txBytes;

@end

/**
 * Phone config interface
 */
@interface AbtoPhoneConfig : NSObject <NSCopying>

@property(nonatomic, assign) PhoneSignalingTransport signalingTransport;
@property(nonatomic, assign) PhoneSignalingTransport turnTransport;

@property(class, nonatomic, assign) int logLevel;
@property(class, nonatomic, assign) BOOL ackUserAgentHeader;
@property(class, nonatomic, assign) PhoneIceSkipFlags iceSkipFlags;
@property(class, nonatomic, assign) BOOL enableIceRemoveRemoteCandidates;
@property(class, nonatomic, assign) BOOL enablePreserveDynamicPtOnMediaHold;
@property(class, nonatomic, assign) BOOL logSdkInfo;
@property(class, nonatomic, assign) BOOL logToFile;
@property(class, nonatomic, assign) BOOL logInDocuments;

@property(class, nonatomic, retain) NSString * _Nullable licenseUserId;
@property(class, nonatomic, retain) NSString * _Nullable licenseKey;

@property(nonatomic, assign) BOOL enableSrtp;
@property(nonatomic, assign) BOOL enableZrtp;
@property(nonatomic, assign) BOOL enableProxy;
@property(nonatomic, assign) BOOL enableStun;
@property(nonatomic, assign) BOOL enableTurn;
@property(nonatomic, assign) BOOL enableIce;
@property(nonatomic, assign) BOOL enableRingTone;
@property(nonatomic, assign) BOOL enableRingBackTone;
@property(nonatomic, assign) BOOL enableAutorotateCaptureDevice;
@property(nonatomic, assign) BOOL enableDoubleReg;
@property(nonatomic, assign) BOOL enableTLSVerifyServer;
@property(nonatomic, assign) BOOL enableTLSVerifyClient;
@property(nonatomic, assign) BOOL enableSipsSchemeUse;
@property(nonatomic, assign) BOOL enableMwi;
@property(nonatomic, assign) BOOL enableRtcpMux;
@property(nonatomic, assign) BOOL enableAudioSessionResetOnCallsEnd;

@property(nonatomic, assign) BOOL allowSrtp256;

@property(nonatomic, assign) BOOL enableAutoSendRtpVideo;
@property(nonatomic, assign) BOOL enableAutoSendRtpAudio;

@property(nonatomic, assign) BOOL nat64LocalRewrite;
@property(nonatomic, assign) BOOL enablePresence;

@property(nonatomic, assign) BOOL useMemoryRenderer;
@property(nonatomic, assign) BOOL useOpusFec;
@property(nonatomic, assign) BOOL enableDnsSrv;
@property(nonatomic, assign) BOOL handleRingtoneSession;
@property(nonatomic, assign) BOOL handleAudioSession;

@property(nonatomic, assign) BOOL reinitMediaOnCallRestore;
@property(nonatomic, assign) BOOL dontAccessCamera;

@property(nonatomic, assign) BOOL includeTransportInContact;

@property(nonatomic, assign) BOOL allowSrtpOptional;

@property(nonatomic, assign) PhoneHoldMode phoneHoldMode;

@property(nonatomic, retain) NSString * _Nullable ua;
@property(nonatomic, retain) NSString * _Nullable stun;
@property(nonatomic, retain) NSString * _Nullable turn;
@property(nonatomic, retain) NSString * _Nullable turnUsername;
@property(nonatomic, retain) NSString * _Nullable turnPassword;
@property(nonatomic, retain) NSString * _Nullable proxy;
@property(nonatomic, retain) NSString * _Nullable localIp;
@property(nonatomic, retain) NSString * _Nullable displayName;
@property(nonatomic, retain) NSString * _Nullable tlsCaList;
@property(nonatomic, retain) NSString * _Nullable tlsClientCert;
@property(nonatomic, retain) NSString * _Nullable tlsClientPrivKey;
@property(nonatomic, retain) NSString * _Nullable ringToneUrl;
@property(nonatomic, retain) NSString * _Nullable ringBackToneUrl;

@property(nonatomic, retain) NSString * _Nullable regUser;
@property(nonatomic, retain) NSString * _Nullable regDomain;
@property(nonatomic, retain) NSString * _Nullable regAuthId;
@property(nonatomic, retain) NSString * _Nullable regPassword;
@property(nonatomic, retain) NSString * _Nullable regDigest;

@property(nonatomic, retain) NSString * _Nullable registerHeaders;

@property(nonatomic, retain) NSString * _Nullable contactDetails;
@property(nonatomic, retain) NSString * _Nullable contactDetailsUri;

@property(nonatomic, assign) int regExpirationTime;
@property(nonatomic, assign) int localPort;
@property(nonatomic, assign) int hangupTimeout;
@property(nonatomic, assign) int registerTimeout;
@property(nonatomic, assign) int inviteTimeout;
@property(nonatomic, assign) int rtpPort;
@property(nonatomic, assign) int videoFps;
@property(nonatomic, assign) int videoAvgBps;
@property(nonatomic, assign) int videoMaxBps;
@property(nonatomic, assign) int minSipSessionExpire;
@property(nonatomic, assign) int keepAliveInterval;

@property(nonatomic, assign) int jbInit;
@property(nonatomic, assign) int jbMinPre;
@property(nonatomic, assign) int jbMaxPre;
@property(nonatomic, assign) int jbMax;

@property(nonatomic, assign) ForceTransportIpVersion transportIpVersion;

@property(nonatomic, assign) PhoneVideoQualityMode videoQualityMode;

@property(nonatomic, assign) PhoneVideoCaptureContentMode videoCaptureContentMode;

@property(nonatomic, assign) SockEncryption socketEncryptionOptions;

- (id _Nullable)initWithConfig:(AbtoPhoneConfig * _Nullable)config;

- (void)setCodecPriority:(PhoneAudioVideoCodec)idx priority:(NSInteger)priority;
- (NSInteger)codecPriority:(PhoneAudioVideoCodec)idx;
- (BOOL)saveToUserDefaults:(NSString * _Nonnull)key;
- (void)setFromConfig:(AbtoPhoneConfig * _Nullable)config;
- (BOOL)loadFromUserDefaults:(NSString * _Nonnull)key;

+ (NSString * _Nonnull)codecName:(PhoneAudioVideoCodec)idx;
+ (PhoneCodecType)codecType:(PhoneAudioVideoCodec)idx;
+ (id _Nullable )loadFromUserDefaults:(NSString * _Nonnull)key;

@end

/**
 * Phone observer
 */
@protocol AbtoPhoneInterfaceObserver <NSObject>
@required

//- (void)onInitializeState:(PhoneInitializeState)state message:(NSString *)message;
- (void)onRegistered:(NSInteger)accId;
- (void)onRegistrationFailed:(NSInteger)accId statusCode:(int)statusCode statusText:(NSString * _Nonnull)statusText;
- (void)onUnRegistered:(NSInteger)accId;
- (void)onRemoteAlerting:(NSInteger)accId statusCode:(int)statusCode;

- (void)onIncomingCall:(NSInteger)callId remoteContact:(NSString * _Nonnull)remoteContact;
- (void)onCallConnected:(NSInteger)callId remoteContact:(NSString * _Nonnull)remoteContact;
- (void)onCallDisconnected:(NSInteger)callId remoteContact:(NSString * _Nonnull)remoteContact statusCode:(NSInteger)statusCode message:(NSString * _Nonnull)message;
- (void)onCallAlerting:(NSInteger)callId statusCode:(int)statusCode;

- (void)onCallHeld:(NSInteger)callId state:(BOOL)state;
- (void)onToneReceived:(NSInteger)callId tone:(NSInteger)tone;

- (void)onTextMessageReceived:(NSString * _Nonnull)from to:(NSString * _Nonnull)to body:(NSString * _Nonnull)body;
- (void)onTextMessageStatus:(NSString * _Nonnull)address reason:(NSString * _Nonnull)reason status:(BOOL)status;

- (void)onPresenceChanged:(NSString * _Nonnull)uri status:(PhoneBuddyStatus)status note:(NSString * _Nonnull)note;

- (void)onTransferStatus:(NSInteger)callId statusCode:(int)statusCode message:(NSString * _Nonnull)message;

@optional
- (void)onZrtpSas:(NSInteger)callId sas:(NSString * _Nonnull)sas isVerified:(BOOL)verified;
- (void)onZrtpSecureState:(NSInteger)callId secured:(BOOL)secured;
- (void)onZrtpError:(NSInteger)callId error:(NSInteger)error subcode:(NSInteger)subcode;

@optional
- (void)onNetworkStateChanged:(PhoneNetworkEvent)event isIpv6:(BOOL)ipv6;

@optional
- (void)onMwiInfo:(NSInteger)accId withMimeType:(NSString * _Nonnull)type andText:(NSString * _Nonnull)text;

@optional
- (void)onIncomingCall:(NSInteger)callId remoteContact:(NSString * _Nonnull)remoteContact andInviteRequest:(NSString * _Nonnull)inviteRequest;
- (void)onCallConnected:(NSInteger)callId remoteContact:(NSString * _Nonnull)remoteContact andSipMsg:(NSString * _Nonnull)sipRequest;
- (void)onCallDisconnected:(NSInteger)callId remoteContact:(NSString * _Nonnull)remoteContact statusCode:(NSInteger)statusCode message:(NSString * _Nonnull)message andSipMsg:(NSString * _Nonnull)sipRequest;

@optional
- (void)onReceivedSipInfoMsg:(NSString * _Nonnull)sipRequest;

- (void)onReceivedSipInfoMsg:(NSInteger)callId msg:(NSString * _Nonnull)sipRequest;
- (void)onReceivedSipUpdateMsg:(NSInteger)callId msg:(NSString * _Nonnull)sipRequest;

@end


/**
 * Phone API
 */
@interface AbtoPhoneInterface : NSObject

@property(nonatomic, readonly) NSString * _Nonnull libVersion;
@property(class, nonatomic, readonly) NSString * _Nonnull libVersion;

- (BOOL)initialize:(id<AbtoPhoneInterfaceObserver> _Nonnull)observer;
- (BOOL)initialize:(id<AbtoPhoneInterfaceObserver> _Nonnull)observer withBackground:(BOOL)state;
- (void)deinitialize;
- (BOOL)finalizeConfiguration;

- (AbtoPhoneConfig * _Nonnull)config;

// unregister
//-(BOOL)register;
- (BOOL)unregister;
- (BOOL)isAccountRegistered;

// enable/disable background mode
- (BOOL)keepAwake:(BOOL)enable;

// call functionality
- (NSInteger)startCall:(NSString * _Nonnull)destination withVideo:(BOOL)video;
- (NSInteger)startCall:(NSString * _Nonnull)destination withVideo:(BOOL)video andSipCallId:(NSString * _Nullable)sipCallId;
- (NSInteger)startCall:(NSString * _Nonnull)destination withVideo:(BOOL)video andSipCallId:(NSString * _Nullable)sipCallId andHeaders:(NSArray * _Nullable)headers;
- (NSInteger)startCall:(NSString * _Nonnull)destination withVideo:(BOOL)video andSipCallId:(NSString * _Nullable)sipCallId andInviteHeaders:(NSString * _Nullable)headers;

- (BOOL)answerCall:(NSInteger)callId status:(int)status withVideo:(BOOL)video;
- (BOOL)hangUpCall:(NSInteger)callId status:(int)status;
- (BOOL)holdRetrieveCall:(NSInteger)callId;
- (BOOL)redirectCall:(NSInteger)callId to:(NSString * _Nonnull)destination;
- (void)hangUpAllCalls;

// call media management
- (BOOL)updateCall:(NSInteger)callId mediaWithVideo:(BOOL)enabled;
- (BOOL)updateCall:(NSInteger)callId mediaWithVideo:(BOOL)enabled useUpdate:(BOOL)useUpdate;
- (BOOL)setSendingRtpAudio:(NSInteger)callId on:(BOOL)on;
- (BOOL)setSendingRtpVideo:(NSInteger)callId on:(BOOL)on;

// sound management
- (BOOL)setCall:(NSInteger)callId speakerLevel:(float)level;
- (BOOL)setCall:(NSInteger)callId microphoneLevel:(float)level;

// microphone management
- (BOOL)muteMicrophone:(NSInteger)callId on:(BOOL)on;

// DTMF
- (BOOL)sendTone:(NSInteger)callId tone:(unichar)tone;
- (BOOL)sendToneViaInfo:(NSInteger)callId tone:(unichar)tone;

// Bluetooth headset or speakers
- (BOOL)setBluetoothOn:(BOOL)on;
- (BOOL)setSpeakerphoneOn:(BOOL)on;
- (PhoneAudioRoute)currentAudioRoute;

// IM
- (BOOL)sendTextMessage:(NSString * _Nonnull)to withBody:(NSString * _Nonnull)message;

// call transfer
- (BOOL)transferCall:(NSInteger)callId toContact:(NSString * _Nonnull)uri;

// presence
- (BOOL)setPresence:(PhoneBuddyStatus)status statusText:(NSString * _Nullable)text;
- (BOOL)subscribeBuddy:(NSString * _Nonnull)uri on:(BOOL)on;

// video management
- (void)setRemoteView:(UIImageView * _Nullable)view;
- (void)setLocalView:(UIImageView * _Nullable)view;
- (BOOL)isVideoCall:(NSInteger)callId;
- (BOOL)muteVideo:(NSInteger)callId on:(BOOL)on;
- (BOOL)switchCameraToFront:(NSInteger)callId on:(BOOL)on;
- (void)setCall:(NSInteger)callId localView:(UIImageView * _Nullable)view;
- (void)setCall:(NSInteger)callId remoteView:(UIImageView * _Nullable)view;

// account parsing
+ (NSString * _Nonnull)sipUriUsername:(NSString * _Nullable)uri;
+ (NSString * _Nonnull)sipUriDomain:(NSString * _Nullable)uri;
+ (NSString * _Nonnull)sipUriDisplayName:(NSString * _Nullable)uri;

// call recording
- (BOOL)startRecordingFor:(NSInteger)callId filePath:(NSString * _Nonnull)name;
- (BOOL)stopRecording;

// call playback
- (BOOL)startPlayFile:(NSInteger)callId filePath:(NSString *_Nonnull)name;
- (BOOL)stopPlaying;

// media quality monitor
- (AbtoPhoneMediaQuality * _Nullable)readCallMediaQuality:(NSInteger)callId isVideo:(BOOL)video;

// ZRTP check
- (BOOL)isZrtpSecured:(NSInteger)callId;
- (void)setSasCall:(NSInteger)callId validity:(BOOL)valid;

// CallKit
- (void)deactivateAudio;
- (BOOL)activateAudio;

// conference
- (BOOL)joinAllCallsToConf;
- (BOOL)setCurrentCall:(NSInteger)callId;
- (BOOL)attendedTransferCall:(NSInteger)callId dst:(NSInteger)dstCallId;

// MWI text parsing
+ (NSDictionary * _Nonnull)mwiMessageClasses:(NSString * _Nullable)text;

- (void)setRecordProcessing:(void (^_Nullable)(void * _Nullable pointer, NSInteger samplesPerFrame))block;
- (void)setPlaybackProcessing:(void (^_Nullable)(void * _Nullable pointer, NSInteger samplesPerFrame))block;

- (void)setMediaProtect:(void (^_Nullable)(void * _Nonnull strm, void * _Nonnull pkt, NSInteger * _Nonnull len))block;
- (void)setMediaUnprotect:(void (^_Nullable)(void * _Nonnull strm, void * _Nonnull pkt, NSInteger * _Nonnull len))block;

// memory video driver
- (CGSize)getRawVideoFrame:(NSInteger)callId fromCapturer:(BOOL)capturer toBuffer:(void * _Nonnull)buffer withSize:(NSInteger)size;
- (CGSize)getRawVideoFrameSize:(NSInteger)callId fromCapturer:(BOOL)capturer;

// global plaback/record level
- (BOOL)setMicrophoneLevel:(float)level;
- (BOOL)setSpeakerLevel:(float)level;
- (float)getMicrophoneLevel;
- (float)getSpeakerLevel;

// logging
- (void)logMsg:(NSString *_Nonnull)msg withLevel:(NSInteger)level forSender:(NSString *_Nonnull)sender;

- (NSArray *_Nullable)getDNSAddresses;

@end

#endif
