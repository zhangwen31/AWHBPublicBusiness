//
//  AWHBPBFullPhotoCollectionViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/9.
//

#import <UIKit/UIKit.h>

@interface AWHBPBFullPhotoCollectionViewCell : UICollectionViewCell

//绑定数据用于浏览
@property (nonatomic,strong)NSMutableArray<UIImage *> *imageArray;
//绑定数据用于浏览url 优先使用
@property (nonatomic,strong)NSMutableArray<NSString *> *imageUrlArray;
//描述
@property (nonatomic,strong)NSMutableArray<NSString *> *desArray;
//当前图片
@property (nonatomic,strong)UIImage *nowImage;
//当前图片 url
@property (nonatomic,strong)NSString *nowImageUrl;

@property(nonatomic,assign)UIViewContentMode contentMode;

- (void)setupImage:(UIImage *)image withImageUrl:(NSString *)imageUrl;

@end

