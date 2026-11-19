
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100fc260 <.text+0xfb260>:
100fc260:	55                   	push   ebp
100fc261:	8b ec                	mov    ebp,esp
100fc263:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100fc266:	f3 0f 10 80 c4 22 00 	movss  xmm0,DWORD PTR [eax+0x22c4]
100fc26d:	00 
100fc26e:	f3 0f 5c 05 38 1f 1a 	subss  xmm0,DWORD PTR ds:0x101a1f38
100fc275:	10 
100fc276:	f3 0f 11 80 c4 22 00 	movss  DWORD PTR [eax+0x22c4],xmm0
100fc27d:	00 
100fc27e:	f3 0f 59 05 1c 1f 1a 	mulss  xmm0,DWORD PTR ds:0x101a1f1c
100fc285:	10 
100fc286:	f3 0f 5e 05 18 66 1d 	divss  xmm0,DWORD PTR ds:0x101d6618
100fc28d:	10 
100fc28e:	f3 0f 11 45 08       	movss  DWORD PTR [ebp+0x8],xmm0
100fc293:	d9 45 08             	fld    DWORD PTR [ebp+0x8]
100fc296:	5d                   	pop    ebp
100fc297:	c2 04 00             	ret    0x4
