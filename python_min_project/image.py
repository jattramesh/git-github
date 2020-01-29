from tkinter import *
from PIL import ImageTk,Image
root=Tk()
root.title("tkinter")
my_image1=ImageTk.PhotoImage(Image.open("/home/rahul/Downloads/image.jpg"))
my_image2=ImageTk.PhotoImage(Image.open("/home/rahul/Downloads/image.jpg"))
my_image3=ImageTk.PhotoImage(Image.open("/home/rahul/Downloads/image5.jpg"))
my_image4=ImageTk.PhotoImage(Image.open("/home/rahul/Downloads/image4.jpg"))
my_image5=ImageTk.PhotoImage(Image.open("/home/rahul/Downloads/image5.jpg"))
my_image6=ImageTk.PhotoImage(Image.open("/home/rahul/Downloads/image6.jpg"))
my_image7=ImageTk.PhotoImage(Image.open("/home/rahul/Downloads/image7.jpg"))
my_image8=ImageTk.PhotoImage(Image.open("image.ico"))
image_list=[my_image1,my_image2,my_image3,my_image4,my_image5,my_image6,my_image7,my_image8]
my_label=Label(image=my_image1)
my_label.grid(row=0,column=0,columnspan=3)
def forward( image_num):
 global my_label
 global button_forward
 global button_back
 my_label.grid_forget()
 my_label=Label(image=image_list[image_num-1])
 my_label.grid(row=0,column=0,columnspan=3)
 button_forward=Button(root,text=">>",command=lambda:forward(image_num+1))
 button_back=Button(root,text="<<",command=lambda:back(image_num-1))
 if image_num ==4:
  button_forward=Button(root,text=">>",state=DISABLED)
 my_label.grid(row=0,column=0,columnspan=3)
 button_back.grid(row=1,column=0)
 button_forward.grid(row=1,column=2)
def back(image_num):
 global my_label
 global button_forward
 global button_back
 my_label.grid_forget()
 my_label=Label(image=image_list[image_num-1])
 button_forward=Button(root,text=">>",command=lambda:forward(image_num+1))
 button_back=Button(root,text="<<",command=lambda:back(image_num-1))
 if image_num==1:
   button_back=Button(root,text="<<",state=DISABLED)
 my_label.grid(row=0,column=0,columnspan=3)
 button_back.grid(row=1,column=0)
 button_forward.grid(row=1,column=2)
button_back=Button(root,text="<<",command=back)
button_exit=Button(root,text="Exit Programme",command=root.quit)
button_forward=Button(root,text=">>",command=lambda:forward(1))
button_back.grid(row=1,column=0)
button_exit.grid(row=1,column=1)
button_forward.grid(row=1,column=2)
root.mainloop()










