
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10017210 <.text+0x16210>:
10017210:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
10017213:	f3 0f 10 49 5c       	movss  xmm1,DWORD PTR [ecx+0x5c]
10017218:	f3 0f 10 82 04 01 00 	movss  xmm0,DWORD PTR [edx+0x104]
1001721f:	00 
10017220:	0f 2e c1             	ucomiss xmm0,xmm1
10017223:	9f                   	lahf
10017224:	f6 c4 44             	test   ah,0x44
10017227:	7b 17                	jnp    0x10017240
10017229:	f3 0f 5c c1          	subss  xmm0,xmm1
1001722d:	f3 0f 58 41 58       	addss  xmm0,DWORD PTR [ecx+0x58]
10017232:	f3 0f 11 41 58       	movss  DWORD PTR [ecx+0x58],xmm0
10017237:	8b 82 04 01 00 00    	mov    eax,DWORD PTR [edx+0x104]
1001723d:	89 41 5c             	mov    DWORD PTR [ecx+0x5c],eax
10017240:	c3                   	ret
