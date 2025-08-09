//
//  AWHBPBPZBtnView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnBtnTitle)(NSString *title);
@interface AWHBPBPZBtnView : UIView
/**btn字体颜色 */
@property(nonatomic,strong)UIColor *btnTitleColor;
/**btn背景颜色 */
@property(nonatomic,strong)UIColor *btnBgColor;
/**btn选中字体颜色 */
@property(nonatomic,strong)UIColor *selectBtnColor;
/**btn选中背景颜色 */
@property(nonatomic,strong)UIColor *selectBgColor;
/**btn边框颜色 */
@property(nonatomic,strong)UIColor *borderColor;
/**是否有背景*/
@property(nonatomic,assign)BOOL isHaveBg;
/**是否有边框*/
@property(nonatomic,assign)BOOL isBorder;
/**btn边框宽度 */
@property(nonatomic,assign)CGFloat borderWidth;
/**btn圆角 */
@property(nonatomic,assign)CGFloat cornerRadius;
/**btn  width */
@property(nonatomic,assign)CGFloat width;
/**btn  hight */
@property(nonatomic,assign)CGFloat hight;
/**btn字体大小 */
@property(nonatomic, strong) UIFont *font;
/** btn的title*/
@property(nonatomic,strong)NSArray *btnTitleArr;
/**选择的标题*/
@property(nonatomic,strong)NSString *selectTitle;
/** */
@property(nonatomic,copy)ReturnBtnTitle ReturnBtnTitle;
-(void)reloadBtnView;
@end

NS_ASSUME_NONNULL_END
