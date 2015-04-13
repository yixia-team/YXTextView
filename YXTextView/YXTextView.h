#import <UIKit/UIKit.h>

#define paddingLeft 5
#define topOffset -2

@protocol YXTextViewDelegate <NSObject>
@optional
- (void)TextViewWillDelete:(UITextView*)textView;
@end

@interface YXTextView : UITextView <UIKeyInput>

@property (nonatomic, assign) id<YXTextViewDelegate> deleteDelegate;

@property (nonatomic, strong) NSString *placeholder;

@property (nonatomic, strong) NSAttributedString *attributedPlaceholder;

- (CGRect)placeholderRectForBounds:(CGRect)bounds;

@end
