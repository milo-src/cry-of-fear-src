
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100060f0 <.text+0x50f0>:
100060f0:	55                   	push   ebp
100060f1:	8b ec                	mov    ebp,esp
100060f3:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
100060f6:	85 c9                	test   ecx,ecx
100060f8:	78 1c                	js     0x10006116
100060fa:	8b 15 50 0c 22 10    	mov    edx,DWORD PTR ds:0x10220c50
10006100:	3b 8a 4c 02 00 00    	cmp    ecx,DWORD PTR [edx+0x24c]
10006106:	7f 0e                	jg     0x10006116
10006108:	83 c1 03             	add    ecx,0x3
1000610b:	69 c1 e0 00 00 00    	imul   eax,ecx,0xe0
10006111:	8b 04 10             	mov    eax,DWORD PTR [eax+edx*1]
10006114:	5d                   	pop    ebp
10006115:	c3                   	ret
10006116:	83 c8 ff             	or     eax,0xffffffff
10006119:	5d                   	pop    ebp
1000611a:	c3                   	ret
