//
//  AWHBPBShowCarImageHeaderFooterView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/28.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBShowCarImageHeaderFooterView : UITableViewHeaderFooterView

/**
 * 展示添加图片
 * @param eachRowNumber  每行展示数量
 * @param title 标题内容
 * @param selectImages 第二个图片数组
 * @param secondTitle 第二个标题内容
 * @param secondSelectImages 第二个图片数组
 */
- (void)showEachRowNumber:(NSInteger)eachRowNumber
                    title:(NSString *)title
             selectImages:(NSArray *)selectImages
              secondTitle:(NSString *)secondTitle
       secondSelectImages:(NSArray *)secondSelectImages;

@end

NS_ASSUME_NONNULL_END
