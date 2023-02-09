from psd_tools import PSDImage
import os

def saveLayers(way, psd):
    
    if not os.path.exists(way):
        os.makedirs(way)
    my_fail = open(way+"\AccompanyingInformation.txt","w+")
    for layer in psd:
        s = layer.name + " " + str(layer.left) + " " + str(layer.top)
        my_fail.write(s+ "\n")
        layer_image = layer.composite()
        layer_image.save(way + "/%s.png" % layer.name)
        print(s)
    my_fail.close()

def main():
    directory = "Image"
    for filename in os.listdir(directory):
        f = os.path.join(directory, filename)
        if os.path.isfile(f):
            name = os.path.splitext(f)
            if name[1] == ".psd":
                print(f)
                psd = PSDImage.open(f)
                saveLayers(name[0], psd)
                print("")
main()