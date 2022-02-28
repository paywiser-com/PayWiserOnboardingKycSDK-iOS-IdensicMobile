//
//  SNSEvent.h
//  IdensicMobileSDK
//

#import <Foundation/Foundation.h>

/**
 * Event type
 */
typedef NS_ENUM(NSInteger, SNSEventType) {
    /**
     * Fired when a verification step has been initiated
     *
     * @discussion Cast the event to `SNSEventStepInitiated` in order to get the event parameters
     */
    SNSEventType_StepInitiated,
    
    /**
     * Fired when a verification step has been completed
     *
     * @discussion Cast the event to `SNSEventStepCompleted` in order to get the event parameters
     */
    SNSEventType_StepCompleted,
};

typedef NSString * _Nonnull SNSEventKey NS_TYPED_ENUM;

extern SNSEventKey const SNSEventKey_idDocSetType NS_SWIFT_NAME(idDocSetType);
extern SNSEventKey const SNSEventKey_isCancelled NS_SWIFT_NAME(isCancelled);

#pragma mark -

/**
 * Generic event
 *
 * @discussion
 *      All the events are passed into `sdk.onEvent` callback as instances of a concrete `SNSEvent*` class
 *      inherited from the `SNSEvent` base class that ensures that each event has its type - `eventType`
 *      and an optional set of parameters - `payload`.
 *
 *      Depending on your needs you can get event parameters either by examining the `payload`
 *      or by casting the given event instance to a specific `SNSEvent*` class according to its type.
 */
@interface SNSEvent : NSObject

/**
 * Event type
 */
@property (nonatomic, readonly) SNSEventType eventType;

/**
 * Event payload
 *
 * @discussion The payload is represented by a raw dictionary. The concrete set of keys depends on the event type.
 */
@property (nonatomic, readonly, nonnull) NSDictionary <SNSEventKey, id> *payload;

/**
 * Provides default description for the given event type
 */
- (nonnull NSString *)descriptionForEventType:(SNSEventType)eventType;

@end

#pragma mark -

/**
 * Fired when a verification step has been initiated
 */
@interface SNSEventStepInitiated : SNSEvent

@property (nonatomic, readonly, nonnull) NSString *idDocSetType;

@end

#pragma mark -

/**
 * Fired when a verification step has been fulfilled or cancelled
 */
@interface SNSEventStepCompleted : SNSEvent

@property (nonatomic, readonly, nonnull) NSString *idDocSetType;
@property (nonatomic, readonly) BOOL isCancelled;

@end
