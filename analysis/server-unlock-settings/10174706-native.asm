
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10174706 <.text+0x173706>:
10174706:	8b ff                	mov    edi,edi
10174708:	55                   	push   ebp
10174709:	8b ec                	mov    ebp,esp
1017470b:	83 ec 18             	sub    esp,0x18
1017470e:	83 7d 08 00          	cmp    DWORD PTR [ebp+0x8],0x0
10174712:	75 0a                	jne    0x1017471e
10174714:	6a 00                	push   0x0
10174716:	e8 f9 4d 01 00       	call   0x10189514
1017471b:	59                   	pop    ecx
1017471c:	c9                   	leave
1017471d:	c3                   	ret
1017471e:	33 c0                	xor    eax,eax
10174720:	56                   	push   esi
10174721:	89 45 e8             	mov    DWORD PTR [ebp-0x18],eax
10174724:	89 45 ec             	mov    DWORD PTR [ebp-0x14],eax
10174727:	89 45 f0             	mov    DWORD PTR [ebp-0x10],eax
1017472a:	89 45 f4             	mov    DWORD PTR [ebp-0xc],eax
1017472d:	89 45 f8             	mov    DWORD PTR [ebp-0x8],eax
10174730:	88 45 fc             	mov    BYTE PTR [ebp-0x4],al
10174733:	e8 96 f3 ff ff       	call   0x10173ace
10174738:	50                   	push   eax
10174739:	8d 45 e8             	lea    eax,[ebp-0x18]
1017473c:	50                   	push   eax
1017473d:	ff 75 08             	push   DWORD PTR [ebp+0x8]
10174740:	e8 b9 dd ff ff       	call   0x101724fe
10174745:	83 c4 0c             	add    esp,0xc
10174748:	85 c0                	test   eax,eax
1017474a:	74 05                	je     0x10174751
1017474c:	83 ce ff             	or     esi,0xffffffff
1017474f:	eb 0b                	jmp    0x1017475c
10174751:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
10174754:	e8 bb 4d 01 00       	call   0x10189514
10174759:	59                   	pop    ecx
1017475a:	8b f0                	mov    esi,eax
1017475c:	80 7d fc 00          	cmp    BYTE PTR [ebp-0x4],0x0
10174760:	74 09                	je     0x1017476b
10174762:	ff 75 f0             	push   DWORD PTR [ebp-0x10]
10174765:	e8 38 8f 00 00       	call   0x1017d6a2
1017476a:	59                   	pop    ecx
1017476b:	8b c6                	mov    eax,esi
1017476d:	5e                   	pop    esi
1017476e:	c9                   	leave
1017476f:	c3                   	ret
