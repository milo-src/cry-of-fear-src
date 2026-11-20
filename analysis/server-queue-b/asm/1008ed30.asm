
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

1008ed30 <.text+0x8dd30>:
1008ed30:	55                   	push   ebp
1008ed31:	8b ec                	mov    ebp,esp
1008ed33:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
1008ed37:	8b 51 04             	mov    edx,DWORD PTR [ecx+0x4]
1008ed3a:	75 15                	jne    0x1008ed51
1008ed3c:	f3 0f 7e 81 40 01 00 	movq   xmm0,QWORD PTR [ecx+0x140]
1008ed43:	00 
1008ed44:	66 0f d6 42 50       	movq   QWORD PTR [edx+0x50],xmm0
1008ed49:	8b 81 48 01 00 00    	mov    eax,DWORD PTR [ecx+0x148]
1008ed4f:	eb 13                	jmp    0x1008ed64
1008ed51:	f3 0f 7e 81 34 01 00 	movq   xmm0,QWORD PTR [ecx+0x134]
1008ed58:	00 
1008ed59:	66 0f d6 42 50       	movq   QWORD PTR [edx+0x50],xmm0
1008ed5e:	8b 81 3c 01 00 00    	mov    eax,DWORD PTR [ecx+0x13c]
1008ed64:	89 42 58             	mov    DWORD PTR [edx+0x58],eax
1008ed67:	8b 41 04             	mov    eax,DWORD PTR [ecx+0x4]
1008ed6a:	83 c0 08             	add    eax,0x8
1008ed6d:	50                   	push   eax
1008ed6e:	51                   	push   ecx
1008ed6f:	e8 6c b2 08 00       	call   0x10119fe0
1008ed74:	83 c4 08             	add    esp,0x8
1008ed77:	5d                   	pop    ebp
1008ed78:	c2 04 00             	ret    0x4
