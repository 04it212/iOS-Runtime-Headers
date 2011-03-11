/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/MediaControl.framework/MediaControl
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface MediaControlClient : NSObject  {
    struct dispatch_queue_s { } *_queue;
    struct MediaControlClientImp { } *_client;
    struct dispatch_queue_s { } *_eventHandlerQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _eventHandlerBlock;

}


- (void)invalidate;
- (id)init;
- (void)dealloc;
- (void)authorizeWithPICRequest:(id)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)getPlaybackInfoWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)getVolumeWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)setVolume:(float)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)playRemoteWithParams:(id)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (struct MediaControlClientImp { }*)internalClient;
- (void)ensureConnected;
- (void)ensureDisconnected;
- (void)sendPhotoAtPath:(id)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)sendPhotoAtPath:(id)arg1 options:(id)arg2 completionQueue:(struct dispatch_queue_s { }*)arg3 completionBlock:(id)arg4;
- (void)sendPhotoData:(id)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)getSlideshowInfoWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)playWithRemoteURL:(id)arg1 startPosition:(float)arg2 completionQueue:(struct dispatch_queue_s { }*)arg3 completionBlock:(id)arg4;
- (void)getSlideshowFeaturesWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)setSlideshowInfo:(id)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)setHost:(id)arg1;
- (void)sendPhotoData:(id)arg1 options:(id)arg2 completionQueue:(struct dispatch_queue_s { }*)arg3 completionBlock:(id)arg4;
- (void)stopWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)setEventHandlerQueue:(struct dispatch_queue_s { }*)arg1 eventHandlerBlock:(id)arg2;
- (void)playWithLocalFilePath:(id)arg1 startPosition:(float)arg2 playInfo:(id)arg3 completionQueue:(struct dispatch_queue_s { }*)arg4 completionBlock:(id)arg5;
- (void)setRate:(float)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)getPositionWithOptions:(unsigned int)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)setPosition:(float)arg1 completionQueue:(struct dispatch_queue_s { }*)arg2 completionBlock:(id)arg3;
- (void)setPassword:(id)arg1;

@end