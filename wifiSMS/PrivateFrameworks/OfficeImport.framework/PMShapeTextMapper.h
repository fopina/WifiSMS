/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADOrientedBounds, CMStyle;



@interface PMShapeTextMapper : CMMapper 
{
    OADTextBody *mTextBody;
    OADOrientedBounds *mBounds;
    CMStyle *mStyle;
    BOOL mRectangular;
}


- (id)initWithOadTextBody:(id)arg1 bounds:(id)arg2 parent:(id)arg3;
- (void)dealloc;
- (BOOL)setRectangular:(BOOL)arg1;
- (void)mapAt:(id)arg1 withState:(id)arg2;
- (BOOL)isTableCellContent;
- (NSInteger)textAnchor;

@end
