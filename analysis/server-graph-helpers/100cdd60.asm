
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100cdd60 <.text+0xccd60>:
100cdd60:	55                   	push   ebp
100cdd61:	8b ec                	mov    ebp,esp
100cdd63:	83 ec 08             	sub    esp,0x8
100cdd66:	53                   	push   ebx
100cdd67:	56                   	push   esi
100cdd68:	8b 75 08             	mov    esi,DWORD PTR [ebp+0x8]
100cdd6b:	57                   	push   edi
100cdd6c:	8b 39                	mov    edi,DWORD PTR [ecx]
100cdd6e:	8b 44 f1 04          	mov    eax,DWORD PTR [ecx+esi*8+0x4]
100cdd72:	8d 14 75 01 00 00 00 	lea    edx,[esi*2+0x1]
100cdd79:	8b 5c f1 08          	mov    ebx,DWORD PTR [ecx+esi*8+0x8]
100cdd7d:	89 45 08             	mov    DWORD PTR [ebp+0x8],eax
100cdd80:	89 5d fc             	mov    DWORD PTR [ebp-0x4],ebx
100cdd83:	3b d7                	cmp    edx,edi
100cdd85:	7d 4f                	jge    0x100cddd6
100cdd87:	f3 0f 10 4d fc       	movss  xmm1,DWORD PTR [ebp-0x4]
100cdd8c:	0f 1f 40 00          	nop    DWORD PTR [eax+0x0]
100cdd90:	8d 04 75 02 00 00 00 	lea    eax,[esi*2+0x2]
100cdd97:	3b c7                	cmp    eax,edi
100cdd99:	7d 0e                	jge    0x100cdda9
100cdd9b:	f3 0f 10 44 d1 08    	movss  xmm0,DWORD PTR [ecx+edx*8+0x8]
100cdda1:	0f 2f 44 c1 08       	comiss xmm0,DWORD PTR [ecx+eax*8+0x8]
100cdda6:	0f 47 d0             	cmova  edx,eax
100cdda9:	f3 0f 10 44 d1 08    	movss  xmm0,DWORD PTR [ecx+edx*8+0x8]
100cddaf:	0f 2f c1             	comiss xmm0,xmm1
100cddb2:	73 1f                	jae    0x100cddd3
100cddb4:	8b 44 d1 04          	mov    eax,DWORD PTR [ecx+edx*8+0x4]
100cddb8:	89 44 f1 04          	mov    DWORD PTR [ecx+esi*8+0x4],eax
100cddbc:	8b 44 d1 08          	mov    eax,DWORD PTR [ecx+edx*8+0x8]
100cddc0:	89 44 f1 08          	mov    DWORD PTR [ecx+esi*8+0x8],eax
100cddc4:	8b f2                	mov    esi,edx
100cddc6:	8b 39                	mov    edi,DWORD PTR [ecx]
100cddc8:	8d 14 55 01 00 00 00 	lea    edx,[edx*2+0x1]
100cddcf:	3b d7                	cmp    edx,edi
100cddd1:	7c bd                	jl     0x100cdd90
100cddd3:	8b 45 08             	mov    eax,DWORD PTR [ebp+0x8]
100cddd6:	5f                   	pop    edi
100cddd7:	89 5c f1 08          	mov    DWORD PTR [ecx+esi*8+0x8],ebx
100cdddb:	89 44 f1 04          	mov    DWORD PTR [ecx+esi*8+0x4],eax
100cdddf:	5e                   	pop    esi
100cdde0:	5b                   	pop    ebx
100cdde1:	8b e5                	mov    esp,ebp
100cdde3:	5d                   	pop    ebp
100cdde4:	c2 04 00             	ret    0x4
