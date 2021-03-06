/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class UIBezierPath, UIImage;

@interface ASButtonCellConfiguration : SUItemCellConfiguration {
    UIImage *_normalButtonImage;
    UIImage *_selectedButtonImage;
    UIBezierPath *_selectionClipPath;
}

+ (float)rowHeightForContext:(id)arg1 representedObject:(id)arg2;

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_frameForImage:(id)arg1;
- (id)colorForLabelAtIndex:(unsigned int)arg1 withModifiers:(unsigned int)arg2;
- (void)dealloc;
- (void)drawWithModifiers:(unsigned int)arg1;
- (id)fontForLabelAtIndex:(unsigned int)arg1;
- (id)init;
- (void)reloadImages;
- (void)reloadLayoutInformation;
- (void)reloadStrings;

@end
