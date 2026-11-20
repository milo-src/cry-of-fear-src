
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1011abb0 <.text+0x119bb0>:
1011abb0:	69 0d 60 10 23 10 cd 	imul   ecx,DWORD PTR ds:0x10231060,0x10dcd
1011abb7:	0d 01 00 
1011abba:	0f b6 c1             	movzx  eax,cl
1011abbd:	8b 04 85 e0 a6 21 10 	mov    eax,DWORD PTR [eax*4+0x1021a6e0]
1011abc4:	40                   	inc    eax
1011abc5:	03 c1                	add    eax,ecx
1011abc7:	a3 60 10 23 10       	mov    ds:0x10231060,eax
1011abcc:	25 ff ff ff 0f       	and    eax,0xfffffff
1011abd1:	c3                   	ret
