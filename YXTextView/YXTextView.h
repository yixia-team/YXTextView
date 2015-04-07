#import <UIKit/UIKit.h>

@interface YXTextView : UITextView

@property (nonatomic, strong) NSString *placeholder;

@property (nonatomic, strong) NSAttributedString *attributedPlaceholder;

- (CGRect)placeholderRectForBounds:(CGRect)bounds;

@end
