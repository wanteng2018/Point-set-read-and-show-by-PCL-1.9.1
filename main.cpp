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
        PCL_ERROR("couldn't read file p1.ply \n");
        return (-1);
    }
    pcl::visualization::CloudViewer viewer("PLY viewer");
    viewer.showCloud(cloud);
    while (!viewer.wasStopped())
    {

    }
    return 0;
}

