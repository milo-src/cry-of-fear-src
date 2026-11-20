
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100f0265 <.text+0xef265>:
100f0265:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
100f0268:	83 b8 74 01 00 00 01 	cmp    DWORD PTR [eax+0x174],0x1
100f026f:	7c 2f                	jl     0x100f02a0
100f0271:	8b 0d e4 2e 22 10    	mov    ecx,DWORD PTR ds:0x10222ee4
100f0277:	85 c9                	test   ecx,ecx
100f0279:	74 18                	je     0x100f0293
100f027b:	8b 01                	mov    eax,DWORD PTR [ecx]
100f027d:	8b 40 20             	mov    eax,DWORD PTR [eax+0x20]
100f0280:	ff d0                	call   eax
100f0282:	85 c0                	test   eax,eax
100f0284:	74 0d                	je     0x100f0293
100f0286:	8b ce                	mov    ecx,esi
100f0288:	e8 23 98 ff ff       	call   0x100e9ab0
100f028d:	5f                   	pop    edi
100f028e:	5e                   	pop    esi
100f028f:	8b e5                	mov    esp,ebp
100f0291:	5d                   	pop    ebp
100f0292:	c3                   	ret
