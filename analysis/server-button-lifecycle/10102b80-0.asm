
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10102b80 <.text+0x101b80>:
10102b80:	55                   	push   ebp
10102b81:	8b ec                	mov    ebp,esp
10102b83:	83 ec 0c             	sub    esp,0xc
10102b86:	56                   	push   esi
10102b87:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
10102b8a:	83 ec 0c             	sub    esp,0xc
10102b8d:	8b cc                	mov    ecx,esp
10102b8f:	8b 46 50             	mov    eax,DWORD PTR [esi+0x50]
10102b92:	89 01                	mov    DWORD PTR [ecx],eax
10102b94:	8b 46 54             	mov    eax,DWORD PTR [esi+0x54]
10102b97:	89 41 04             	mov    DWORD PTR [ecx+0x4],eax
10102b9a:	8b 46 58             	mov    eax,DWORD PTR [esi+0x58]
10102b9d:	89 41 08             	mov    DWORD PTR [ecx+0x8],eax
10102ba0:	8d 45 f4             	lea    eax,[ebp-0xc]
10102ba3:	50                   	push   eax
10102ba4:	e8 27 f6 ff ff       	call   0x101021d0
10102ba9:	83 c4 10             	add    esp,0x10
10102bac:	f3 0f 7e 00          	movq   xmm0,QWORD PTR [eax]
10102bb0:	66 0f d6 46 44       	movq   QWORD PTR [esi+0x44],xmm0
10102bb5:	8b 40 08             	mov    eax,DWORD PTR [eax+0x8]
10102bb8:	89 46 4c             	mov    DWORD PTR [esi+0x4c],eax
10102bbb:	f3 0f 7e 05 34 2f 22 	movq   xmm0,QWORD PTR ds:0x10222f34
10102bc2:	10 
10102bc3:	66 0f d6 46 50       	movq   QWORD PTR [esi+0x50],xmm0
10102bc8:	a1 3c 2f 22 10       	mov    eax,ds:0x10222f3c
10102bcd:	89 46 58             	mov    DWORD PTR [esi+0x58],eax
10102bd0:	5e                   	pop    esi
10102bd1:	8b e5                	mov    esp,ebp
10102bd3:	5d                   	pop    ebp
10102bd4:	c3                   	ret
