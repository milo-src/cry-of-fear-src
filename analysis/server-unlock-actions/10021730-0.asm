
D:\Steam\steamapps\common\Cry of Fear\cryoffear\cl_dlls\hl.dll:     file format pei-i386


Disassembly of section .text:

10021730 <.text+0x20730>:
10021730:	55                   	push   ebp
10021731:	8b ec                	mov    ebp,esp
10021733:	56                   	push   esi
10021734:	8b f1                	mov    esi,ecx
10021736:	8b 4d 08             	mov    ecx,DWORD PTR [ebp+0x8]
10021739:	85 c9                	test   ecx,ecx
1002173b:	74 37                	je     0x10021774
1002173d:	80 be bc 01 00 00 00 	cmp    BYTE PTR [esi+0x1bc],0x0
10021744:	75 2e                	jne    0x10021774
10021746:	8b 46 04             	mov    eax,DWORD PTR [esi+0x4]
10021749:	c6 86 bc 01 00 00 01 	mov    BYTE PTR [esi+0x1bc],0x1
10021750:	f6 80 a4 01 00 00 01 	test   BYTE PTR [eax+0x1a4],0x1
10021757:	75 1b                	jne    0x10021774
10021759:	6a 00                	push   0x0
1002175b:	6a 00                	push   0x0
1002175d:	68 00 00 08 00       	push   0x80000
10021762:	e8 99 b8 0b 00       	call   0x100dd000
10021767:	84 c0                	test   al,al
10021769:	75 09                	jne    0x10021774
1002176b:	56                   	push   esi
1002176c:	e8 8f 81 0f 00       	call   0x10119900
10021771:	83 c4 04             	add    esp,0x4
10021774:	5e                   	pop    esi
10021775:	5d                   	pop    ebp
10021776:	c2 04 00             	ret    0x4
