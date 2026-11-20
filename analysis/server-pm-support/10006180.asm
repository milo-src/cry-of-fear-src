
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10006180 <.text+0x5180>:
10006180:	55                   	push   ebp
10006181:	8b ec                	mov    ebp,esp
10006183:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10006186:	85 c9                	test   ecx,ecx
10006188:	78 1d                	js     0x100061a7
1000618a:	8b 15 50 0c 22 10    	mov    edx,DWORD PTR ds:0x10220c50
10006190:	3b 8a 54 47 02 00    	cmp    ecx,DWORD PTR [edx+0x24754]
10006196:	7f 0f                	jg     0x100061a7
10006198:	69 c1 e0 00 00 00    	imul   eax,ecx,0xe0
1000619e:	8b 84 10 a8 47 02 00 	mov    eax,DWORD PTR [eax+edx*1+0x247a8]
100061a5:	5d                   	pop    ebp
100061a6:	c3                   	ret
100061a7:	83 c8 ff             	or     eax,0xffffffff
100061aa:	5d                   	pop    ebp
100061ab:	c3                   	ret
