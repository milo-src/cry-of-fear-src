
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100ca7c0 <.text+0xc97c0>:
100ca7c0:	56                   	push   esi
100ca7c1:	8b f1                	mov    esi,ecx
100ca7c3:	8b 46 1c             	mov    eax,DWORD PTR [esi+0x1c]
100ca7c6:	8d 04 40             	lea    eax,[eax+eax*2]
100ca7c9:	99                   	cdq
100ca7ca:	2b c2                	sub    eax,edx
100ca7cc:	d1 f8                	sar    eax,1
100ca7ce:	83 c0 03             	add    eax,0x3
100ca7d1:	50                   	push   eax
100ca7d2:	89 86 c0 20 00 00    	mov    DWORD PTR [esi+0x20c0],eax
100ca7d8:	e8 13 33 00 00       	call   0x100cdaf0
100ca7dd:	ff b6 c0 20 00 00    	push   DWORD PTR [esi+0x20c0]
100ca7e3:	6a 02                	push   0x2
100ca7e5:	e8 4c 6d 0a 00       	call   0x10171536
100ca7ea:	83 c4 08             	add    esp,0x8
100ca7ed:	89 86 bc 20 00 00    	mov    DWORD PTR [esi+0x20bc],eax
100ca7f3:	85 c0                	test   eax,eax
100ca7f5:	75 12                	jne    0x100ca809
100ca7f7:	68 e0 73 1d 10       	push   0x101d73e0
100ca7fc:	6a 02                	push   0x2
100ca7fe:	ff 15 3c 30 22 10    	call   DWORD PTR ds:0x1022303c
100ca804:	83 c4 08             	add    esp,0x8
100ca807:	5e                   	pop    esi
100ca808:	c3                   	ret
100ca809:	33 c9                	xor    ecx,ecx
100ca80b:	39 8e c0 20 00 00    	cmp    DWORD PTR [esi+0x20c0],ecx
100ca811:	7e 20                	jle    0x100ca833
100ca813:	83 ca ff             	or     edx,0xffffffff
100ca816:	66 66 0f 1f 84 00 00 	data16 nop WORD PTR [eax+eax*1+0x0]
100ca81d:	00 00 00 
100ca820:	8b 86 bc 20 00 00    	mov    eax,DWORD PTR [esi+0x20bc]
100ca826:	66 89 14 48          	mov    WORD PTR [eax+ecx*2],dx
100ca82a:	41                   	inc    ecx
100ca82b:	3b 8e c0 20 00 00    	cmp    ecx,DWORD PTR [esi+0x20c0]
100ca831:	7c ed                	jl     0x100ca820
100ca833:	57                   	push   edi
100ca834:	33 ff                	xor    edi,edi
100ca836:	39 7e 1c             	cmp    DWORD PTR [esi+0x1c],edi
100ca839:	7e 21                	jle    0x100ca85c
100ca83b:	53                   	push   ebx
100ca83c:	33 db                	xor    ebx,ebx
100ca83e:	66 90                	xchg   ax,ax
100ca840:	8b 46 10             	mov    eax,DWORD PTR [esi+0x10]
100ca843:	8b ce                	mov    ecx,esi
100ca845:	57                   	push   edi
100ca846:	ff 74 18 04          	push   DWORD PTR [eax+ebx*1+0x4]
100ca84a:	ff 34 18             	push   DWORD PTR [eax+ebx*1]
100ca84d:	e8 ce 33 00 00       	call   0x100cdc20
100ca852:	47                   	inc    edi
100ca853:	8d 5b 18             	lea    ebx,[ebx+0x18]
100ca856:	3b 7e 1c             	cmp    edi,DWORD PTR [esi+0x1c]
100ca859:	7c e5                	jl     0x100ca840
100ca85b:	5b                   	pop    ebx
100ca85c:	5f                   	pop    edi
100ca85d:	5e                   	pop    esi
100ca85e:	c3                   	ret
