/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class <PSBaseView>, NSDictionary;



@interface PSSetupController : PSRootController 
{
    NSDictionary *_rootInfo;
    <PSBaseView> *_parentController;
}

+ (BOOL)isOverlay;

- (void)setupRootListForSize:(struct CGSize { float x1; float x2; })arg1;
- (id)initForContentSize:(struct CGSize { float x1; float x2; })arg1;
- (void)dealloc;
- (id)view;
- (id)parentController;
- (void)viewWillBecomeVisible:(void*)arg1;
- (void)didFinishTransition;
- (void)pushController:(id)arg1;
- (void)setParentController:(id)arg1;
- (id)controller;
- (void)dismiss;
- (void)pushControllerOnParentWithSpecifier:(id)arg1;
- (void)popControllerOnParent;
- (void)navigationBar:(id)arg1 buttonClicked:(NSInteger)arg2;
- (void)updateNavButtons;
- (void)showNavigationBarButtons:(id)arg1 :(id)arg2;
- (void)setPrompt:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;

@end