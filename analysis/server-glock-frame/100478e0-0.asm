
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

100478e0 <.text+0x468e0>:
100478e0:	55                   	push   ebp
100478e1:	8b ec                	mov    ebp,esp
100478e3:	83 ec 0c             	sub    esp,0xc
100478e6:	56                   	push   esi
100478e7:	8b f1                	mov    esi,ecx
100478e9:	51                   	push   ecx
100478ea:	c7 04 24 00 00 80 40 	mov    DWORD PTR [esp],0x40800000
100478f1:	8b 06                	mov    eax,DWORD PTR [esi]
100478f3:	ff 50 08             	call   DWORD PTR [eax+0x8]
100478f6:	83 be e4 01 00 00 00 	cmp    DWORD PTR [esi+0x1e4],0x0
100478fd:	8b ce                	mov    ecx,esi
100478ff:	8b 06                	mov    eax,DWORD PTR [esi]
10047901:	6a 00                	push   0x0
10047903:	c7 46 78 70 7b 04 10 	mov    DWORD PTR [esi+0x78],0x10047b70
1004790a:	6a 01                	push   0x1
1004790c:	74 04                	je     0x10047912
1004790e:	6a 10                	push   0x10
10047910:	eb 02                	jmp    0x10047914
10047912:	6a 13                	push   0x13
10047914:	ff 90 98 01 00 00    	call   DWORD PTR [eax+0x198]
1004791a:	6a 0f                	push   0xf
1004791c:	6a 0a                	push   0xa
1004791e:	c7 86 48 01 00 00 00 	mov    DWORD PTR [esi+0x148],0x0
10047925:	00 00 00 
10047928:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
1004792e:	89 86 44 01 00 00    	mov    DWORD PTR [esi+0x144],eax
10047934:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
1004793a:	c7 44 24 04 00 00 7a 	mov    DWORD PTR [esp+0x4],0x447a0000
10047941:	44 
10047942:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
10047949:	83 ec 08             	sub    esp,0x8
1004794c:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
1004794f:	83 c0 08             	add    eax,0x8
10047952:	c7 44 24 04 00 00 c8 	mov    DWORD PTR [esp+0x4],0x42c80000
10047959:	42 
1004795a:	c7 04 24 00 00 40 41 	mov    DWORD PTR [esp],0x41400000
10047961:	50                   	push   eax
10047962:	e8 79 24 0d 00       	call   0x10119de0
10047967:	83 c4 14             	add    esp,0x14
1004796a:	c7 45 f4 00 00 7f 43 	mov    DWORD PTR [ebp-0xc],0x437f0000
10047971:	8d 45 f4             	lea    eax,[ebp-0xc]
10047974:	c7 45 f8 00 00 00 00 	mov    DWORD PTR [ebp-0x8],0x0
1004797b:	c7 45 fc 00 00 00 00 	mov    DWORD PTR [ebp-0x4],0x0
10047982:	6a 00                	push   0x0
10047984:	6a 7d                	push   0x7d
10047986:	83 ec 08             	sub    esp,0x8
10047989:	c7 44 24 04 00 00 00 	mov    DWORD PTR [esp+0x4],0x0
10047990:	00 
10047991:	c7 04 24 00 00 00 40 	mov    DWORD PTR [esp],0x40000000
10047998:	50                   	push   eax
10047999:	ff b6 60 01 00 00    	push   DWORD PTR [esi+0x160]
1004799f:	e8 5c 22 0d 00       	call   0x10119c00
100479a4:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
100479aa:	83 c4 18             	add    esp,0x18
100479ad:	b9 b4 ea 1a 10       	mov    ecx,0x101aeab4
100479b2:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
100479b5:	6a 00                	push   0x0
100479b7:	c7 80 60 02 00 00 00 	mov    DWORD PTR [eax+0x260],0x41200000
100479be:	00 20 41 
100479c1:	a1 88 31 22 10       	mov    eax,ds:0x10223188
100479c6:	2b 88 98 00 00 00    	sub    ecx,DWORD PTR [eax+0x98]
100479cc:	51                   	push   ecx
100479cd:	8b 8e 60 01 00 00    	mov    ecx,DWORD PTR [esi+0x160]
100479d3:	e8 b8 c3 0a 00       	call   0x100f3d90
100479d8:	6a 02                	push   0x2
100479da:	6a 00                	push   0x0
100479dc:	ff 15 b0 30 22 10    	call   DWORD PTR ds:0x102230b0
100479e2:	83 c4 08             	add    esp,0x8
100479e5:	83 e8 00             	sub    eax,0x0
100479e8:	74 43                	je     0x10047a2d
100479ea:	83 e8 01             	sub    eax,0x1
100479ed:	74 21                	je     0x10047a10
100479ef:	83 e8 01             	sub    eax,0x1
100479f2:	75 6d                	jne    0x10047a61
100479f4:	6a 64                	push   0x64
100479f6:	50                   	push   eax
100479f7:	83 ec 08             	sub    esp,0x8
100479fa:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10047a01:	3f 
10047a02:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10047a09:	68 0c eb 1a 10       	push   0x101aeb0c
10047a0e:	eb 38                	jmp    0x10047a48
10047a10:	6a 64                	push   0x64
10047a12:	6a 00                	push   0x0
10047a14:	83 ec 08             	sub    esp,0x8
10047a17:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10047a1e:	3f 
10047a1f:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10047a26:	68 e4 ea 1a 10       	push   0x101aeae4
10047a2b:	eb 1b                	jmp    0x10047a48
10047a2d:	6a 64                	push   0x64
10047a2f:	6a 00                	push   0x0
10047a31:	83 ec 08             	sub    esp,0x8
10047a34:	c7 44 24 04 cd cc 4c 	mov    DWORD PTR [esp+0x4],0x3f4ccccd
10047a3b:	3f 
10047a3c:	c7 04 24 00 00 80 3f 	mov    DWORD PTR [esp],0x3f800000
10047a43:	68 bc ea 1a 10       	push   0x101aeabc
10047a48:	8b 86 60 01 00 00    	mov    eax,DWORD PTR [esi+0x160]
10047a4e:	6a 02                	push   0x2
10047a50:	8b 40 04             	mov    eax,DWORD PTR [eax+0x4]
10047a53:	ff b0 0c 02 00 00    	push   DWORD PTR [eax+0x20c]
10047a59:	e8 92 4f 0b 00       	call   0x100fc9f0
10047a5e:	83 c4 1c             	add    esp,0x1c
10047a61:	5e                   	pop    esi
10047a62:	8b e5                	mov    esp,ebp
10047a64:	5d                   	pop    ebp
10047a65:	c3                   	ret
