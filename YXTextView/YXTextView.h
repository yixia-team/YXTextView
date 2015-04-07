#import <UIKit/UIKit.h>

@protocol YXTextViewDelegate <NSObject>
@optional
- (void)TextViewDidDelete:(UITextView*)textView;
@end

@interface YXTextView : UITextView <UIKeyInput>

@property (nonatomic, assign) id<YXTextViewDelegate> deleteDelegate;

@property (nonatomic, strong) NSString *placeholder;

@property (nonatomic, strong) NSAttributedString *attributedPlaceholder;

- (CGRect)placeholderRectForBounds:(CGRect)bounds;

@end
