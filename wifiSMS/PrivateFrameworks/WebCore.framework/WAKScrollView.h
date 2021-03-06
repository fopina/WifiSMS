/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class WAKView;



@interface WAKScrollView : WAKView <WebCoreFrameScrollView>
{
    WAKView *_documentView;
    id _delegate;
}


- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setHasVerticalScroller:(BOOL)arg1;
- (BOOL)hasVerticalScroller;
- (void)setHasHorizontalScroller:(BOOL)arg1;
- (BOOL)hasHorizontalScroller;
- (void)setVerticalScroller:(id)arg1;
- (id)verticalScroller;
- (void)setHorizontalScroller:(id)arg1;
- (id)horizontalScroller;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })documentVisibleRect;
- (void)setDocumentView:(id)arg1;
- (id)documentView;
- (void)setContentView:(id)arg1;
- (id)contentView;
- (void)setDrawsBackground:(BOOL)arg1;
- (BOOL)drawsBackground;
- (void)setLineScroll:(float)arg1;
- (float)verticalLineScroll;
- (float)horizontalLineScroll;
- (void)reflectScrolledClipView:(id)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAllowsHorizontalScrolling:(BOOL)arg1;
- (BOOL)allowsHorizontalScrolling;
- (void)setAllowsVerticalScrolling:(BOOL)arg1;
- (BOOL)allowsVerticalScrolling;
- (void)setAllowsScrolling:(BOOL)arg1;
- (BOOL)allowsScrolling;
- (void)setHorizontalScrollingMode:(NSInteger)arg1;
- (void)setVerticalScrollingMode:(NSInteger)arg1;
- (void)setScrollingMode:(NSInteger)arg1;
- (NSInteger)horizontalScrollingMode;
- (NSInteger)verticalScrollingMode;
- (void)setScrollingModes:(NSInteger)arg1 vertical:(NSInteger)arg2 andLock:(BOOL)arg3;
- (void)scrollingModes:(NSInteger*)arg1 vertical:(NSInteger*)arg2;
- (void)setScrollBarsSuppressed:(BOOL)arg1 repaintOnUnsuppress:(BOOL)arg2;
- (void)scrollWheel:(struct __GSEvent { }*)arg1;
- (struct CGPoint { float x1; float x2; })contentsPoint;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })actualDocumentVisibleRect;

@end
