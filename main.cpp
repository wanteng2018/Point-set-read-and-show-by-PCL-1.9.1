#include <iostream>
#include <pcl/io/pcd_io.h>
#include <pcl/io/ply_io.h>
#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/visualization/cloud_viewer.h>

using namespace std;

int main()
{
    pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud(new pcl::PointCloud<pcl::PointXYZRGB>);
    if (pcl::io::loadPLYFile<pcl::PointXYZRGB>("p1.ply", *cloud) == -1)
    {
        PCL_ERROR("couldn't read file test_pcd.pcd \n");
        return (-1);
    }
/*
    // 创建点云  并设置适当的参数（width height is_dense）
    cloud.width    = 5;
    cloud.height   = 1;
    cloud.is_dense = false;  //不是稠密型的
    cloud.points.resize (cloud.width * cloud.height);  //点云总数大小
     //用随机数的值填充PointCloud点云对象
    for (size_t i = 0; i < cloud.points.size (); ++i)
    {
      cloud.points[i].x = 1024 * rand () / (RAND_MAX + 1.0f);
      cloud.points[i].y = 1024 * rand () / (RAND_MAX + 1.0f);
      cloud.points[i].z = 1024 * rand () / (RAND_MAX + 1.0f);
    }

    pcl::io::savePCDFileASCII ("test_pcd.pcd", cloud);
*/
    pcl::visualization::CloudViewer viewer("pcd viewer");
    viewer.showCloud(cloud);
    while (!viewer.wasStopped())
    {

    }
    return 0;
}

